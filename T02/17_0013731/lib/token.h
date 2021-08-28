/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Token struct declarations
*/

#ifndef _TOKEN_H_
#define _TOKEN_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct token {
  char token_type[20];
  char content[100];
  int line;
  int column;
  int scopeNum;
} token;

#endif