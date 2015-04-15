bison -d ./c-grammar.y
flex ./c-grammar.l
gcc -ll ./c-grammar.tab.c ./lex.yy.c -o ./test-c