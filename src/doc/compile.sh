bison -d ./c-grammar.y
flex -p yy ./c-grammar.l
gcc ./c-grammar.tab.c ./lex.yy.c -o ./test-c
rm lex.yy.c
flex -p zz ./second.l
gcc ./c-grammar.tab.c ./lex.zz.c -o ./parser
rm lex.zz.c
