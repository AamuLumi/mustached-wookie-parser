bison -d c-grammar.y
flex c-grammar.l
flex -P zz second-parser.l
flex -P xx third-parser.l
gcc c-grammar.tab.c lex.xx.c lex.yy.c lex.zz.c -o test-c
