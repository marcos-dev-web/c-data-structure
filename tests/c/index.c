#include <stdio.h>
#include <malloc.h>

// define uma constante
#define MAXIMA_ALTURA 255

// define um tipo chamado INTEIRO que vai ser do tipo INTEIRO
typedef int INTEIRO;

// criar uma estrutura chamada PesoAltura
typedef struct {
  INTEIRO peso;
  INTEIRO altura;
} PesoAltura;


INTEIRO main() {

  // aloca um espaco na memoria com o tamanho do struct PesoAltura
  PesoAltura * pessoa = (PesoAltura *) malloc(sizeof(PesoAltura));
  // modifica o valor de peso
  pessoa->peso = 80;
  // modifica o valor de altura
  pessoa->altura = 185;

  // acessa o valor de peso
  printf("PESO: %d\n", pessoa->peso);
  // acessa o valor de altura
  printf("ALTURA: %d\n", pessoa->altura);

  // acessa o valor de altura
  if (pessoa->altura > MAXIMA_ALTURA) {
    printf("PESSOA ACIMA DA ALTURA MAXIMA\n");
  } else {
    printf("PESSOA ABAIXO DA ALTURA MAXIMA\n");
  }

  // cria variavel com o valor 10
  int a = 10;

  // guarda o local na memoria da variavel a
  int * point_a = &a;

  printf("AFTER -> A: %d\n", a);
  // muda o valor no loca de memoria da variavel a para 30
  *point_a = 30;

  printf("BEFORE -> A: %d\n", a);

  // alocando um espaco na memoria
  int * x = (int *) malloc(sizeof(int)); // return void* and i cast to int *

  // guarda o valor 1000 na memoria no local x*
  * x = 1e3; // 1000


  // verifica o tamnho do tipo inteiro
  int int_size = sizeof(int);

  // endereco de memoria, valor nesse endereco, tamanho do tipo int
  printf("x = %p\n* x = %i\nint_size = %i\n", x, * x, int_size);

  return 0;
}
