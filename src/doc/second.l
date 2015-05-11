%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+)) 
WS  [ \t\v\n\f]

%{
    //'
#include <stdio.h>
#include "c-grammar.tab.h"

extern int yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);
static void analyzeDirective(void);
    
extern FILE* yyin;
extern FILE* yyout;
%}

%%

"#beginning" { DebutDoc();}

.					{ /* discard bad characters */ }

%%

void DebutDoc(void){
  char* c;
  char** brief;
  char** name
  
  while ( (c=input()) != "#"){
    if ( c == "\"){
      if (c== "b"){ //rief
        while (c != "\n"){
          brief = c;
          brief ++;
        }
      }
      if (c=="n"){//ame
        while ( c != '\n'){
          name =c;
          name ++;
          }
      }
    }
  //faire les balises dans le fichier html
}

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

void createHTMLBeginFile(FILE * fichier)
{
    fprintf(fichier, "%s\n", "<html>");

    fprintf(fichier, "%s\n", "<head>");
    fprintf(fichier, "%s\n", "<script src=\"js/jquery-1.11.2.min.js\"></script>");
    fprintf(fichier, "%s\n", "<link rel=\"stylesheet\" type=\"text/css\" href=\"css/bootstrap.min.css\">");
    fprintf(fichier, "%s\n","<link rel=\"stylesheet\" type=\"text/css\" href=\"css/documentation.css\">");
    fprintf(fichier, "%s\n","<meta name=\"viewport\" content=\"width=device-width, initial-scale=0.5\">");
    fprintf(fichier, "%s\n","<title>Code Example</title>");
    fprintf(fichier, "%s\n","</head>");
    fprintf(fichier, "%s\n", "<body>");
    fprintf(fichier, "%s\n","<div class=\"container\">");
    fprintf(fichier, "%s\n","<div class=\"page-title\">test.c</div>");
    fprintf(fichier, "%s\n","<div class=\"mainContent row\">");
    fprintf(fichier, "%s\n","<div class=\"col-xs-1 lineNumber\"></div>");
    fprintf(fichier, "%s\n","<div class=\"col-xs-11\">");
    fprintf(fichier, "%s\n","<div class=\"code-style\">");
}

void createHTMLEndFile(FILE * fichier)
{
    fprintf(fichier, "%s\n", "</div>");
    fprintf(fichier, "%s\n","</div>");
    fprintf(fichier, "%s\n","</div>");
    fprintf(fichier, "%s\n","</div>");
    fprintf(fichier, "%s\n","<script src=\"js/documentationScript.js\"></script>");
    fprintf(fichier, "%s\n","</body>");

    fprintf(fichier, "%s\n","</html>");
}

int main(int argc, char* argv[]){
    if (argc < 3){
        fprintf(stderr, "Usage : ./parser fileToAnalyze.c fileToCreate.html");
        return -1;
    }
    
  yyin = fopen(argv[1], "r");
  yyout = fopen(argv[2], "w");
    
  createHTMLBeginFile(yyout);
    
  yyparse();
    
  createHTMLEndFile(yyout);
    
  fclose(yyin);
  fclose(yyout);
    
  return 0;
}
