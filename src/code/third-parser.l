%{
	#include <stdio.h>
	#include <stdbool.h>
	#include "c-grammar.tab.h"

	extern FILE* yyin;
	extern FILE* yyout;

	void removeIdentifierDeclarationTag();
	void addDeclarationTag();

	bool varDeclarationAdded = false;
%}

L   [a-zA-Z_]
A   [a-zA-Z_0-9]

%%

",=<=var-declaration=<=" fprintf(yyout, "</declaration>,<declaration>");
")=<=var-declaration=<=" {fprintf(yyout, "</declaration>)"); varDeclarationAdded = false;}

"(".+"=<=var-declaration=<=" {if (!varDeclarationAdded) addDeclarationTag(); REJECT;}

"<identifier>"{L}{A}*"</identifier>=<=identifier-declaration=<=" {removeIdentifierDeclarationTag();}
"=<=fun-declaration=<="	{fprintf(yyout, "</declaration>");}

"<declaration><img class=\"code-expander\" src=\"img/collapse.png\">" {fprintf(yyout, "<img class=\"code-expander\" src=\"img/collapse.png\"><declaration>");}
.							fprintf(yyout, "%s", yytext);
\n {varDeclarationAdded = false; fprintf(yyout, "\n");}

%%

void addDeclarationTag(){
	fprintf(yyout, "<declaration>");
	varDeclarationAdded = true;
}

void removeIdentifierDeclarationTag(){
	// <identifier> = 12 char
	int i = 12;
	fprintf(yyout, "<identifier class=\"declaration\">");
	for (; yytext[i] != '\0'; i++){
		if (yytext[i] == '<')
			break;
		fprintf(yyout, "%c", yytext[i]);
	}
	fprintf(yyout, "</identifier>");
}

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

