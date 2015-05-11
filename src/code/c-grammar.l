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
#include <stdbool.h>
#include "c-grammar.tab.h"

extern int yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);
static void analyzeDirective(void);
    
extern FILE* yyin;
extern FILE* yyout;

bool codeExpanderInsertedOnLine = false;
bool noBracketsCondition = true;
bool onNoBracketsCondition = false;
%}

%%

"#"                     { analyzeDirective();}
"/*"                    { comment(); }
"//".*                  { fprintf(yyout, "<comment>%s</comment>", yytext);}

"auto"					{ fprintf(yyout, "%s", "<keyword>auto</keyword>");return(AUTO); }
"break"					{ fprintf(yyout, "%s", "<keyword>break</keyword>");return(BREAK); }
"case"					{ fprintf(yyout, "%s", "<keyword>case</keyword>");return(CASE); }
"char"					{ fprintf(yyout, "%s", "<type>char</type>");return(CHAR); }
"const"					{ fprintf(yyout, "%s", "<keyword>const</keyword>");return(CONST); }
"continue"				{ fprintf(yyout, "%s", "<keyword>continue</keyword>");return(CONTINUE); }
"default"				{ fprintf(yyout, "%s", "<keyword>default</keyword>");return(DEFAULT); }
"do"					{ fprintf(yyout, "%s", "<keyword>do</keyword>");return(DO); }
"double"				{ fprintf(yyout, "%s", "<type>double</type>");return(DOUBLE); }
"else"					{ fprintf(yyout, "%s", "<keyword>else</keyword>");return(ELSE); }
"enum"					{ fprintf(yyout, "%s", "<keyword>enum</keyword>");return(ENUM); }
"extern"				{ fprintf(yyout, "%s", "<keyword>extern</keyword>");return(EXTERN); }
"float"					{ fprintf(yyout, "%s", "<type>float</type>");return(FLOAT); }
"for"					{ fprintf(yyout, "%s", "<keyword>for</keyword>");return(FOR); }
"goto"					{ fprintf(yyout, "%s", "<keyword>goto</keyword>");return(GOTO); }
"if"					{ fprintf(yyout, "%s", "<keyword>if</keyword>");return(IF); }
"inline"				{ fprintf(yyout, "%s", "<keyword>inline</keyword>");return(INLINE); }
"int"					{ fprintf(yyout, "%s", "<type>int</type>");return(INT); }
"long"					{ fprintf(yyout, "%s", "<type>long</type>");return(LONG); }
"register"				{ fprintf(yyout, "%s", "<keyword>register</keyword>");return(REGISTER); }
"restrict"				{ fprintf(yyout, "%s", "<keyword>restrict</keyword>");return(RESTRICT); }
"return"				{ fprintf(yyout, "%s", "<keyword>return</keyword>");return(RETURN); }
"short"					{ fprintf(yyout, "%s", "<type>short</type>");return(SHORT); }
"signed"				{ fprintf(yyout, "%s", "<type>signed</type>");return(SIGNED); }
"sizeof"				{ fprintf(yyout, "%s", "<keyword>sizeof</keyword>");return(SIZEOF); }
"static"				{ fprintf(yyout, "%s", "<keyword>static</keyword>");return(STATIC); }
"struct"				{ fprintf(yyout, "%s", "<keyword>struct</keyword>");return(STRUCT); }
"switch"				{ fprintf(yyout, "%s", "<keyword>switch</keyword>");return(SWITCH); }
"typedef"				{ fprintf(yyout, "%s", "<keyword>typedef</keyword>");return(TYPEDEF); }
"union"					{ fprintf(yyout, "%s", "<keyword>union</keyword>");return(UNION); }
"unsigned"				{ fprintf(yyout, "%s", "<type>unsigned</type>");return(UNSIGNED); }
"void"					{ fprintf(yyout, "%s", "<type>void</type>");return(VOID); }
"volatile"				{ fprintf(yyout, "%s", "<keyword>volatile</keyword>");return(VOLATILE); }
"while"					{ fprintf(yyout, "%s", "<keyword>while</keyword>");return(WHILE); }
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

{L}{A}*					    { fprintf(yyout, "<identifier>%s</identifier>", yytext);return check_type(); }

{HP}{H}+{IS}?				{ fprintf(yyout, "<value>%s</value>", yytext);return I_CONSTANT; }
{NZ}{D}*{IS}?				{ fprintf(yyout, "<value>%s</value>", yytext);return I_CONSTANT; }
"0"{O}*{IS}?				{ fprintf(yyout, "<value>%s</value>", yytext);return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"	{ fprintf(yyout, "<value>%s</value>", yytext);return I_CONSTANT; }


{D}+{E}{FS}?				{ fprintf(yyout, "<value>%s</value>", yytext);return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?		{ fprintf(yyout, "<value>%s</value>", yytext);return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ fprintf(yyout, "<value>%s</value>", yytext);return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ fprintf(yyout, "<value>%s</value>", yytext);return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?		{ fprintf(yyout, "<value>%s</value>", yytext);return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ fprintf(yyout, "<value>%s</value>", yytext);return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ fprintf(yyout, "<string>%s</string>", yytext); return STRING_LITERAL; }

"..."					{ fprintf(yyout, "%s", yytext);return ELLIPSIS; }
">>="					{ fprintf(yyout, "%s", "&gt&gt=");return RIGHT_ASSIGN; }
"<<="					{ fprintf(yyout, "%s", "&lt&lt=");return LEFT_ASSIGN; }
"+="					{ fprintf(yyout, "%s", yytext);return ADD_ASSIGN; }
"-="					{ fprintf(yyout, "%s", yytext);return SUB_ASSIGN; }
"*="					{ fprintf(yyout, "%s", yytext);return MUL_ASSIGN; }
"/="					{ fprintf(yyout, "%s", yytext);return DIV_ASSIGN; }
"%="					{ fprintf(yyout, "%s", yytext);return MOD_ASSIGN; }
"&="					{ fprintf(yyout, "%s", yytext);return AND_ASSIGN; }
"^="					{ fprintf(yyout, "%s", yytext);return XOR_ASSIGN; }
"|="					{ fprintf(yyout, "%s", yytext);return OR_ASSIGN; }
">>"					{ fprintf(yyout, "%s", "&gt&gt");return RIGHT_OP; }
"<<"					{ fprintf(yyout, "%s", "&lt&lt");return LEFT_OP; }
"++"					{ fprintf(yyout, "%s", yytext);return INC_OP; }
"--"					{ fprintf(yyout, "%s", yytext);return DEC_OP; }
"->"					{ fprintf(yyout, "%s", "-&gt");return PTR_OP; }
"&&"					{ fprintf(yyout, "%s", yytext);return AND_OP; }
"||"					{ fprintf(yyout, "%s", yytext);return OR_OP; }
"<="					{ fprintf(yyout, "%s", "&lt=");return LE_OP; }
">="					{ fprintf(yyout, "%s", "&gt=");return GE_OP; }
"=="					{ fprintf(yyout, "%s", yytext);return EQ_OP; }
"!="					{ fprintf(yyout, "%s", yytext);return NE_OP; }
";"	                    { fprintf(yyout, "%s", yytext);return ';'; }
("{"|"<%")			{ fprintf(yyout, "%s{%s", "<img class=\"code-expander\" src=\"img/collapse.png\">", "<div class=\"block\">"); return '{';}
("}"|"%>")				{ fprintf(yyout, "</div>}");return '}'; }
","					    { fprintf(yyout, "%s", yytext);return ','; }
":"					    { fprintf(yyout, "%s", yytext);return ':'; }
"="					    { fprintf(yyout, "%s", yytext);return '='; }
"("					    { fprintf(yyout, "%s", yytext);return '('; }
")"					    { fprintf(yyout, "%s", yytext);return ')'; }
("["|"<:")				{ fprintf(yyout, "%s", yytext);return '['; }
("]"|":>")				{ fprintf(yyout, "%s", yytext);return ']'; }
"."					    { fprintf(yyout, "%s", yytext);return '.'; }
"&"					    { fprintf(yyout, "%s", yytext);return '&'; }
"!"					    { fprintf(yyout, "%s", yytext);return '!'; }
"~"					    { fprintf(yyout, "%s", yytext);return '~'; }
"-"					    { fprintf(yyout, "%s", yytext);return '-'; }
"+"					    { fprintf(yyout, "%s", yytext);return '+'; }
"*"					    { fprintf(yyout, "%s", yytext);return '*'; }
"/"					    { fprintf(yyout, "%s", yytext);return '/'; }
"%"					    { fprintf(yyout, "%s", yytext);return '%'; }
"<"					    { fprintf(yyout, "%s", "&lt;");return '<'; }
">"					    { fprintf(yyout, "%s", "&gt;");return '>'; }
"^"					    { fprintf(yyout, "%s", yytext);return '^'; }
"|"					    { fprintf(yyout, "%s", yytext);return '|'; }
"?"					    { fprintf(yyout, "%s", yytext);return '?'; }
"\n"                    { fprintf(yyout, "<br>");}


{WS}					{ fprintf(yyout, " ");}
.					    { /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

void analyzeDirective(void)
{
    fprintf(yyout, "<directive>#");

    int c;

    while ((c = input()) != '\n')
    {
        if (c == '<')
            fprintf(yyout, "&lt;");

        else if (c == '>')
            fprintf(yyout, "&gt;");
        else
            fprintf(yyout, "%c", c);
    }

    fprintf(yyout, "</directive><br>");

}

static void comment(void)
{
    fprintf(yyout, "<comment>/*");
    int c;

    while ((c = input()) != 0)
    {
        if (c == '*')
        {
            while ((c = input()) == '*')
                fprintf(yyout, "%c", c);

            if (c == '/')
            {
                fprintf(yyout, "*/</comment>");

                return;
            }

            if (c == 0)
                break;
        }

        else if (c == '<')
            fprintf(yyout, "&lt;");

        else if (c == '>')
            fprintf(yyout, "&gt;");

        else if (c == '\n')
            fprintf(yyout, "<br>");

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

