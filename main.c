#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "myLibrary.h"

int main()
{
  char str[50], orig, dest;

  char *resposta[50];

  printf("Digite qual palavra deseja criptografar: ");
  scanf(" %s", str);
  printf("Letra original: ");
  scanf(" %c", &orig);
  printf("Letra destino: ");
  scanf(" %c", &dest);
  
  *resposta = teste(str, orig, dest);
  printf("Resposta: %s", *resposta);

  return 0;
}