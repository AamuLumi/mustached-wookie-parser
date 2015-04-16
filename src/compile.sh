bison -d ./c-grammar.y
flex ./c-grammar.l
gcc ./c-grammar.tab.c ./lex.yy.c -o ./test-c