Running first time or after a change in code:
1. yacc -d compiler.y
2. lex lex.l
3. g++ -std=c++0x  -o compiler lex.yy.c y.tab.c
4. ./compiler <data.in


