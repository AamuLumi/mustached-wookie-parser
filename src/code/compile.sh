bison -d c-grammar.y
echo "a"
flex c-grammar.l
echo "b"
flex -P zz second-parser.l
echo "c"
flex -P xx third-parser.l
gcc c-grammar.tab.c lex.xx.c lex.yy.c lex.zz.c -o test-c
