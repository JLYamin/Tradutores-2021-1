/*
*   Author: João Lucas Azevedo Yamin R. da Cunha
*   File description: Intermediate code generator functions
*/

#include "../lib/gen.h"

FILE* createFile(char* filename) {

  char* newName = malloc(strlen(filename) + 5);

  strcpy(newName, filename);

  for (int i = strlen(newName); i > 0; i--) {
    if (newName[i] == '.') {
      newName[i+1] = 't';
      newName[i+2] = 'a';
      newName[i+3] = 'c';
      newName[i+4] = '\0';
      break;
    }
  }

  FILE* file = fopen(newName, "w");
  free(newName);

  return file;
}

void genCode(FILE* file, tableNode* table, treeNode* root) {
  if (file) {
    fprintf(file, ".table\n");
    addTableDeclarations(file, table);
    fprintf(file, ".code\n");
    fclose(file);
  }

}

void addTableDeclarations(FILE* file, tableNode* table) {
  symbolElem* currentNode = table->symbols;

  while (currentNode != NULL) {
    if (currentNode->isFunction == 0) {
      if (currentNode->type == 0) {
        fprintf(file, "int %s%d\n", currentNode->identifier, currentNode->scopeNum);
      } else if (currentNode->type == 1) {
        fprintf(file, "float %s%d\n", currentNode->identifier, currentNode->scopeNum);
      }
    }
    currentNode = currentNode->next;
  }
}
