/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Intermediate code generator declarations
*/

#ifndef _GEN_H_
#define _GEN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol.h"

FILE* createFile(char* filename);
void genCode(FILE* file, tableNode* table, treeNode* root);
void addTableDeclarations(FILE* file, tableNode* table);
void addCodeSnippets(FILE* file, treeNode* root);
void addTypeConversion(FILE* file, int type, char* operand);
int addCounter();
int previousCounter(int steps);

#endif
