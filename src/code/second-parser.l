%{
	#include <stdio.h>
	#include "c-grammar.tab.h"

	extern FILE* yyin;
	extern FILE* yyout;

	void addLineExpander();
	void addBlockBeginning();
	void removeBlockLineTag();
	void removeBlockBegTag();
%}

%%

.*"=<=block-beg=<=<br>\n"	{removeBlockBegTag();}

.*"\n".*"=<=block-line=<=<br>\n"	{addLineExpander(); REJECT;}
.*"=<=block-line=<=<br>\n"		{addBlockBeginning(); REJECT;}
.*"=<=block-line=<=<br>\n" 			{removeBlockLineTag();}
.*\n							fprintf(yyout, "%s", yytext);


%%

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
	fprintf(yyout, "<div class=\"block\">\n");
}

void removeBlockLineTag(){
	int i = 0;
	for (; yytext[i] != '\0'; i++){
		if (beginWith(yytext +i, "=<=block-line=<="))
			break;
		fprintf(yyout, "%c", yytext[i]);
	}
	fprintf(yyout, "<br></div>\n");
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

