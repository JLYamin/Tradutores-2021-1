/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Symbol table structure declarations
*/

#ifndef _SYMBOL_H_
#define _SYMBOL_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct symbol {
  char identifier[35];
  int type;
  // 0 int, 1 float, 2 int list, 3 float list
  int is_function;
  // 0 is variable, 1 is function
  char params[127][35];
  int scopeNum;
} symbolElem;

// TODO: add symbol table functions

#endif