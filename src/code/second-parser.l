%{
	#include <stdio.h>
	#include <stdbool.h>
	#include "c-grammar.tab.h"

	extern FILE* yyin;
	extern FILE* yyout;

	void addLineExpander();
	void addBlockBeginning();
	void removeBlockLineTag();
	void removeBlockBegTag();
	void removeFunDeclarationTag();

	bool funDeclarationAdded = false;
%}

L   [a-zA-Z_]
A   [a-zA-Z_0-9]

%%

.*"=<=fun-declaration=<=".*"\n"	{if (!funDeclarationAdded) 
									removeFunDeclarationTag();
								REJECT;}

.*"=<=block-beg=<=<br>\n"	{removeBlockBegTag();}

.*"\n".*"=<=block-line=<=<br>\n"	{addLineExpander(); REJECT;}
.*"=<=block-line=<=<br>\n"		{addBlockBeginning(); REJECT;}
.*"=<=block-line=<=<br>\n" 			{removeBlockLineTag();}
.*\n							{fprintf(yyout, "%s", yytext);
								funDeclarationAdded = false;}

%%

void removeFunDeclarationTag(){
	fprintf(yyout, "<declaration>");
	funDeclarationAdded = true;
}

int beginWith(char* s, char* str){
	char* tmp = s;
	char* tmpStr = str;
	for (; *tmp && *tmpStr; tmp++, tmpStr++)
		if (*tmp != *tmpStr)
			return 0;

	return 1;
}

void removeBlockBegTag(){
	int i = 0;
	addLineExpander();
	for (; yytext[i] != '\0'; i++){
		if (beginWith(yytext +i, "=<=block-beg=<="))
			break;
		fprintf(yyout, "%c", yytext[i]);
	}
	yytext[i] = '\0';
	fprintf(yyout, "<br><div class=\"block\">\n");
	funDeclarationAdded = false;
}

void removeBlockLineTag(){
	int i = 0;
	for (; yytext[i] != '\0'; i++){
		if (beginWith(yytext +i, "=<=block-line=<="))
			break;
		fprintf(yyout, "%c", yytext[i]);
	}
	yytext[i] = '\0';
	fprintf(yyout, "<br></div>\n");
	funDeclarationAdded = false;
}

void addLineExpander(){
	fprintf(yyout, "<img class=\"code-expander\" src=\"img/collapse.png\">");
}

void addBlockBeginning(){
	fprintf(yyout, "<div class=\"block\">");
}

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

