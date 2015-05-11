bison -d c-grammar.y
echo "a"
flex c-grammar.l
echo "b"
flex -P zz second-parser.l
echo "c"
gcc c-grammar.tab.c lex.yy.c lex.zz.c -o test-c
