tradutor: flex compile

correct1: flex
	./tradutor ./tests/correct_test_01.c 

correct2: flex
	./tradutor ./tests/correct_test_02.c 

incorrect1: flex
	./tradutor ./tests/incorrect_test_01.c 

incorrect2: flex
	./tradutor ./tests/incorrect_test_02.c 

compile: flex
	gcc -o tradutor lex.yy.c -Wall

flex:
	flex ./src/cipl_lex.l