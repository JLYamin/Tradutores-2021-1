# Analisador Sintático - Trabalho Prático

**Aluno:** João Lucas Azevedo Yamin Rodrigues da Cunha

**Matrícula:** 17/0013731

---

## Estrutura de Pastas

Conforme indicado pela especificação do trabalho:

- `/`: No diretório raiz, encontram-se o makefile, o executável e este arquivo README, além dos arquivos gerados pela compilação;
- `/doc`: contém o documento escrito;
- `/src`: contém os arquivo `cipl_lex.l` e `cipl_syn.y` correspondentes ao léxico e sintático e os arquivos `.c` auxiliares;
- `/lib`: contém os arquivos `.h`;
- `/tests`: contém os arquivos de teste.

## Compilar/Executar

Para executar o analisador sintático e léxico, faça uso do make file por meio do comando

`make compile`

que irá compilar o código e gerará um executável de nome `tradutor`. Com isto, execute utilizando

`./tradutor <caminho_para_o_arquivo>`.

Como dito acima, os testes se encontram no diretório `./tests/`.
