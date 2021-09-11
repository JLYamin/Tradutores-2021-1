tradutor: flex compile

# correct1: compile
# 	./tradutor ./tests/correct_test_01.c 

# correct2: compile
# 	./tradutor ./tests/correct_test_02.c 

# incorrect1: compile
# 	./tradutor ./tests/incorrect_test_01.c 

# incorrect2: compile
# 	./tradutor ./tests/incorrect_test_02.c 

onlyflex:
	flex ./src/cipl_lex.l && gcc -o tradutor lex.yy.c -Wall -Wextra

compile: flex symbol tree
	gcc -o tradutor cipl_syn.tab.c lex.yy.c symbol.o tree.o -g -Wall -Wextra -Wpedantic

tree:
	gcc -c ./src/tree.c -g

symbol:
	gcc -c ./src/symbol.c -g

flex: bison
	flex ./src/cipl_lex.l

bison:
	bison -d ./src/cipl_syn.y -Wcounterexamples -t