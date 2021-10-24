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

compile: flex symbol tree scope type gen
	gcc -o tradutor cipl_syn.tab.c lex.yy.c symbol.o scope.o tree.o type.o gen.o -g -Wall -Wextra -Wpedantic

gen:
	gcc -c ./src/gen.c -g

type:
	gcc -c ./src/type.c -g

tree:
	gcc -c ./src/tree.c -g

symbol: bison
	gcc -c ./src/symbol.c -g

scope:
	gcc -c ./src/scope.c -g

flex: bison
	flex ./src/cipl_lex.l

bison:
	bison -d ./src/cipl_syn.y
