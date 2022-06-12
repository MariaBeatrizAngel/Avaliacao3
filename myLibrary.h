#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef myLibrary
#define myLibrary

char *changeLetter(char text[50], char orig, char dest){
  char resposta[50];

  // Verifica cada letra da palavra original
  for (int i=0; i < 50; i++){
    if (text[i] == orig){
      resposta[i] = dest; // Se for igual a letra a ser mudada, muda
    }else{
      resposta[i] = text[i]; // Se não, somente copia
    }
  }

  fflush(stdin);
  return resposta;
}

int countOcc(char text[50], char orig){
  int j = 0;

  // Conta cada ocorrencia de letra igual
  for (int i=0; i < 50; i++){
    if (text[i] == orig){
      j++;
    }
  }

  return j;
}

#endif