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
"#"                   { analyzeDirective();}
"/*"                                    { comment(); }
"//".*                                    {  fprintf(stderr, "<comment>%s</comment>", yytext);}

"auto"					{ fprintf(stderr, "%s", "<keyword>auto</keyword>");return(AUTO); }
"break"					{ fprintf(stderr, "%s", "<keyword>break</keyword>");return(BREAK); }
"case"					{ fprintf(stderr, "%s", "<keyword>case</keyword>");return(CASE); }
"char"					{ fprintf(stderr, "%s", "<type>char</type>");return(CHAR); }
"const"					{ fprintf(stderr, "%s", "<keyword>const</keyword>");return(CONST); }
"continue"				{ fprintf(stderr, "%s", "<keyword>continue</keyword>");return(CONTINUE); }
"default"				{ fprintf(stderr, "%s", "<keyword>default</keyword>");return(DEFAULT); }
"do"					{ fprintf(stderr, "%s", "<keyword>do</keyword>");return(DO); }
"double"				{ fprintf(stderr, "%s", "<type>double</type>");return(DOUBLE); }
"else"					{ fprintf(stderr, "%s", "<keyword>else</keyword>");return(ELSE); }
"enum"					{ fprintf(stderr, "%s", "<keyword>enum</keyword>");return(ENUM); }
"extern"				{ fprintf(stderr, "%s", "<keyword>extern</keyword>");return(EXTERN); }
"float"					{ fprintf(stderr, "%s", "<type>float</type>");return(FLOAT); }
"for"					{ fprintf(stderr, "%s", "<keyword>for</keyword>");return(FOR); }
"goto"					{ fprintf(stderr, "%s", "<keyword>goto</keyword>");return(GOTO); }
"if"					{ fprintf(stderr, "%s", "<keyword>if</keyword>");return(IF); }
"inline"				{ fprintf(stderr, "%s", "<keyword>inline</keyword>");return(INLINE); }
"int"					{ fprintf(stderr, "%s", "<type>int</type>");return(INT); }
"long"					{ fprintf(stderr, "%s", "<type>long</type>");return(LONG); }
"register"				{ fprintf(stderr, "%s", "<keyword>register</keyword>");return(REGISTER); }
"restrict"				{ fprintf(stderr, "%s", "<keyword>restrict</keyword>");return(RESTRICT); }
"return"				{ fprintf(stderr, "%s", "<keyword>return</keyword>");return(RETURN); }
"short"					{ fprintf(stderr, "%s", "<type>short</type>");return(SHORT); }
"signed"				{ fprintf(stderr, "%s", "<type>signed</type>");return(SIGNED); }
"sizeof"				{ fprintf(stderr, "%s", "<keyword>sizeof</keyword>");return(SIZEOF); }
"static"				{ fprintf(stderr, "%s", "<keyword>static</keyword>");return(STATIC); }
"struct"				{ fprintf(stderr, "%s", "<keyword>struct</keyword>");return(STRUCT); }
"switch"				{ fprintf(stderr, "%s", "<keyword>switch</keyword>");return(SWITCH); }
"typedef"				{ fprintf(stderr, "%s", "<keyword>typedef</keyword>");return(TYPEDEF); }
"union"					{ fprintf(stderr, "%s", "<keyword>union</keyword>");return(UNION); }
"unsigned"				{ fprintf(stderr, "%s", "<type>unsigned</type>");return(UNSIGNED); }
"void"					{ fprintf(stderr, "%s", "<type>void</type>");return(VOID); }
"volatile"				{ fprintf(stderr, "%s", "<keyword>volatile</keyword>");return(VOLATILE); }
"while"					{ fprintf(stderr, "%s", "<keyword>while</keyword>");return(WHILE); }
"_Alignas"                              { return ALIGNAS; }
"_Alignof"                              { return ALIGNOF; }
"_Atomic"                               { return ATOMIC; }
"_Bool"                                 { return BOOL; }
"_Complex"                              { return COMPLEX; }
"_Generic"                              { return GENERIC; }
"_Imaginary"                            { return IMAGINARY; }
"_Noreturn"                             { return NORETURN; }
"_Static_assert"                        { return STATIC_ASSERT; }
"_Thread_local"                         { return THREAD_LOCAL; }
"__func__"                              { return FUNC_NAME; }

{L}{A}*					{ fprintf(stderr, "<identifier>%s</identifier>", yytext);return check_type(); }

{HP}{H}+{IS}?				{ fprintf(stderr, "<value>%s</value>", yytext);return I_CONSTANT; }
{NZ}{D}*{IS}?				{ fprintf(stderr, "<value>%s</value>", yytext);return I_CONSTANT; }
"0"{O}*{IS}?				{ fprintf(stderr, "<value>%s</value>", yytext);return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ fprintf(stderr, "<value>%s</value>", yytext);return I_CONSTANT; }

{D}+{E}{FS}?				{ fprintf(stderr, "<value>%s</value>", yytext);return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ fprintf(stderr, "<value>%s</value>", yytext);return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ fprintf(stderr, "<value>%s</value>", yytext);return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ fprintf(stderr, "<value>%s</value>", yytext);return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ fprintf(stderr, "<value>%s</value>", yytext);return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ fprintf(stderr, "<value>%s</value>", yytext);return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ fprintf(stderr, "<string>%s</string>", yytext); return STRING_LITERAL; }

"..."					{ fprintf(stderr, "%s", yytext);return ELLIPSIS; }
">>="					{ fprintf(stderr, "%s", "&gt&gt=");return RIGHT_ASSIGN; }
"<<="					{ fprintf(stderr, "%s", "&lt&lt=");return LEFT_ASSIGN; }
"+="					{ fprintf(stderr, "%s", yytext);return ADD_ASSIGN; }
"-="					{ fprintf(stderr, "%s", yytext);return SUB_ASSIGN; }
"*="					{ fprintf(stderr, "%s", yytext);return MUL_ASSIGN; }
"/="					{ fprintf(stderr, "%s", yytext);return DIV_ASSIGN; }
"%="					{ fprintf(stderr, "%s", yytext);return MOD_ASSIGN; }
"&="					{ fprintf(stderr, "%s", yytext);return AND_ASSIGN; }
"^="					{ fprintf(stderr, "%s", yytext);return XOR_ASSIGN; }
"|="					{ fprintf(stderr, "%s",yytext);return OR_ASSIGN; }
">>"					{ fprintf(stderr, "%s", "&gt&gt");return RIGHT_OP; }
"<<"					{ fprintf(stderr, "%s", "&lt&lt");return LEFT_OP; }
"++"					{ fprintf(stderr, "%s", yytext);return INC_OP; }
"--"					{ fprintf(stderr, "%s", yytext);return DEC_OP; }
"->"					{ fprintf(stderr, "%s", "-&gt");return PTR_OP; }
"&&"					{ fprintf(stderr, "%s",yytext);return AND_OP; }
"||"					{ fprintf(stderr, "%s", yytext);return OR_OP; }
"<="					{ fprintf(stderr, "%s", "&lt=");return LE_OP; }
">="					{ fprintf(stderr, "%s", "&gt=");return GE_OP; }
"=="					{ fprintf(stderr, "%s", yytext);return EQ_OP; }
"!="					{ fprintf(stderr, "%s", yytext);return NE_OP; }
";"					{ fprintf(stderr, "%s", yytext);return ';'; }
("{"|"<%"){WS}*\n         { fprintf(stderr, "{%s", "<div class=\"block\">");return '{'; }
("{"|"<%")				{ fprintf(stderr, "{%s", "<div class=\"block\">");return '{'; }
("}"|"%>")				{ fprintf(stderr, "</div>}");return '}'; }
","					{ fprintf(stderr, "%s", yytext);return ','; }
":"					{ fprintf(stderr, "%s", yytext);return ':'; }
"="					{ fprintf(stderr, "%s", yytext);return '='; }
"("					{ fprintf(stderr, "%s", yytext);return '('; }
")"					{ fprintf(stderr, "%s", yytext);return ')'; }
("["|"<:")				{ fprintf(stderr, "%s", yytext);return '['; }
("]"|":>")				{ fprintf(stderr, "%s", yytext);return ']'; }
"."					{ fprintf(stderr, "%s", yytext);return '.'; }
"&"					{ fprintf(stderr, "%s", yytext);return '&'; }
"!"					{ fprintf(stderr, "%s", yytext);return '!'; }
"~"					{ fprintf(stderr, "%s", yytext);return '~'; }
"-"					{ fprintf(stderr, "%s", yytext);return '-'; }
"+"					{ fprintf(stderr, "%s", yytext);return '+'; }
"*"					{ fprintf(stderr, "%s", yytext);return '*'; }
"/"					{ fprintf(stderr, "%s", yytext);return '/'; }
"%"					{ fprintf(stderr, "%s", yytext);return '%'; }
"<"					{ fprintf(stderr, "%s", "&lt;");return '<'; }
">"					{ fprintf(stderr, "%s", "&gt;");return '>'; }
"^"					{ fprintf(stderr, "%s", yytext);return '^'; }
"|"					{ fprintf(stderr, "%s", yytext);return '|'; }
"?"					{ fprintf(stderr, "%s",yytext);return '?'; }
"\n"                { fprintf(stderr, "<br>");}

{WS}					{ fprintf(stderr, " ");}
.					{ /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

void analyzeDirective(void)
{
    fprintf(stderr, "<directive>#");

    int c;

    while ((c = input()) != '\n')
    {
        if (c == '<')
            fprintf(stderr, "&lt;");

        else if (c == '>')
            fprintf(stderr, "&gt;");
        else
            fprintf(stderr, "%c", c);
    }

    fprintf(stderr, "</directive><br>");

}

static void comment(void)
{
    
    int c;

    while ((c = input()) != 0)
    {
        if (c == '*')
        {
	   while ( c == '*')
		 c=input();
	    	
	   if ( c == '/')
            {
                fprintf(yyout, "\n#end\n");
                return;
            }

            if (c==0){
	        break;
		}
        }

        else if (c == '<')
            fprintf(yyout, "&lt;");

        else if (c == '>')
            fprintf(yyout, "&gt;");

        else if (c == '\n')
            fprintf(yyout, "\n");

        else
            fprintf(yyout, "%c", c);
    }
    yyerror("unterminated comment");
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
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
    if (argc < 2){
        fprintf(stderr, "Usage : ./parser fileToAnalyze.c fileToCreate");
        return -1;
    }
    
    yyin = fopen(argv[1], "r");
    yyout = fopen("tmpdoc.txt", "w");
    
//    createHTMLBeginFile(yyout);
    
    yyparse();
    
  //  createHTMLEndFile(yyout);
    
    fclose(yyin);
    fclose(yyout);
    
    return 0;
}
