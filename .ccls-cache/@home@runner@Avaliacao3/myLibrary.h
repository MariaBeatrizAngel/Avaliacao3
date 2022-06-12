#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef myLibrary
#define myLibrary

char *teste(char text[50], char orig, char dest){
  char resposta[50];
  
  for (int i=0; i < 50; i++){
    if (text[i] == orig){
      resposta[i] = dest;
    }else{
      resposta[i] = text[i];
    }
  }

  fflush(stdin);
  return resposta;
}

#endif