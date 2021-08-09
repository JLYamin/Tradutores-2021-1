tradutor: flex compile

correct1: compile
	./tradutor ./tests/correct_test_01.c 

correct2: compile
	./tradutor ./tests/correct_test_02.c 

incorrect1: compile
	./tradutor ./tests/incorrect_test_01.c 

incorrect2: compile
	./tradutor ./tests/incorrect_test_02.c 

compile: flex
	gcc -o tradutor lex.yy.c -Wall

flex:
	flex ./src/cipl_lex.l