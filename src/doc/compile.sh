bison -d ./c-grammar.y
flex -P yy ./c-grammar.l
gcc ./c-grammar.tab.c ./lex.yy.c -o ./test-c
flex -P zz ./second.l
gcc ./c-grammar.tab.c ./lex.zz.c -o ./parser
