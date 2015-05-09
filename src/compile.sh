bison -d ./code/c-grammar.y
flex ./code/c-grammar.l
gcc ./code/c-grammar.tab.c ./lex.yy.c -o ./test-c
rm lex.yy.c
