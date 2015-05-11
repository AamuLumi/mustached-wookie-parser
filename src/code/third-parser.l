%{
	#include <stdio.h>
	#include "c-grammar.tab.h"

	extern FILE* yyin;
	extern FILE* yyout;

	void removeIdentifierDeclarationTag();
	void removeDefinitionTag();
%}

L   [a-zA-Z_]
A   [a-zA-Z_0-9]

%%

"<identifier>"{L}{A}*"</identifier>=<=identifier-declaration=<=" {removeIdentifierDeclarationTag();}
"=<=fun-declaration=<="	{fprintf(yyout, "</declaration>");}
"<declaration><img class=\"code-expander\" src=\"img/collapse.png\">" {fprintf(yyout, "<img class=\"code-expander\" src=\"img/collapse.png\"><declaration>");}

.							fprintf(yyout, "%s", yytext);

%%

void removeDefinitionTag(){

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

