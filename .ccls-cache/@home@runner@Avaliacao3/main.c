#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "myLibrary.h"

int main()
{
  char str[50], orig, dest;
  char *resposta[50];
  int occ;

  printf("Digite qual palavra deseja criptografar: ");
  scanf(" %s", str);
  printf("Letra original: ");
  scanf(" %c", &orig);
  printf("Letra destino: ");
  scanf(" %c", &dest);
  
  *resposta = changeLetter(str, orig, dest);
  occ = countOcc(str, orig);
  
  printf("\nPalavra original: %s", str);
  printf("\nResposta: %s", *resposta);
  printf("\nOcorrencias: %d", occ);

  return 0;
}