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

compile: flex
	gcc -o tradutor cipl_sin.tab.c lex.yy.c -g -Wall -Wextra

flex: bison
	flex ./src/cipl_lex.l

bison:
	bison -d ./src/cipl_sin.y -Wcounterexamples