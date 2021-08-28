# Analisador Léxico - Trabalho Prático

**Aluno:** João Lucas Azevedo Yamin Rodrigues da Cunha

**Matrícula:** 17/0013731

---

## Estrutura de Pastas

Conforme indicado pela especificação do trabalho:

- `/`: No diretório raiz, encontram-se o arquivo gerado pelo flex, o makefile, o executável e este arquivo README;
- `/doc`: contém o documento escrito;
- `/src`: contém o arquivo `cipl_lex.l`, correspondente ao léxico;
- `/tests`: contém os arquivos de teste.

## Compilar/Executar

Para executar o analisador léxico, faça uso do make file por meio do comando

`make tradutor`

que irá compilar o código e gerará um executável de nome `tradutor`. Com isto, execute utilizando

`./tradutor <caminho_para_o_arquivo>`.

Como dito acima, os testes se encontram no diretório `./tests`. Caso deseje executar diretamente os arquivos de teste, os seguintes comandos também foram adicionados ao makefile:

`make correct1`

`make correct2`

`make incorrect1`

`make incorrect2`

Eles correspondem, respectivamente, aos dois testes corretos e aos dois testes incorretos.
