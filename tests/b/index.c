#include <stdio.h>

typedef int INTEIRO;

typedef struct {
  int peso;
  int altura;
} PesoAltura;

#define ALTURA_MAXIMA 225

INTEIRO main() {

  PesoAltura pessoa1;

  pessoa1.peso = 80;
  pessoa1.altura = 185;

  printf("ALTURA: %i\nPESO: %i\n", pessoa1.altura, pessoa1.peso);

  if (pessoa1.altura > ALTURA_MAXIMA) {
    printf("PESSOA ACIMA DA ALTURA MAXIMA\n");
  } else {
    printf("PESSOA ABAIXO DA ALTURA MAXIMA\n");
  }

  return 0;
}

