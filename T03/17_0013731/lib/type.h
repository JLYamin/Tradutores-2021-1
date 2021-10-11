/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Type functions declarations
*/

#ifndef _TYPE_H_
#define _TYPE_H_

#include "tree.h"
#include "symbol.h"

int solveType(tokenElem operator, treeNode* nodeA, treeNode* nodeB);
int solveUnaryType(tokenElem operator, treeNode* node);

#endif