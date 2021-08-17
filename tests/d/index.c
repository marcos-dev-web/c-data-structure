#include <stdbool.h>
#include <stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
  TIPOCHAVE chave;
} REGISTRO;

typedef struct {
  REGISTRO A[MAX];
  int nroElem;
} LISTA;


void showList(LISTA * l) {
  int i;
  printf("LIST:\n");
  for (i = 0; i < l->nroElem; i++) {
    printf("EL: %d\n", l->A[i].chave);
  }
  printf("END_LIST\n");
}

void addToList(LISTA * l, int value) {
  if (l->nroElem < 0)  {
    l->nroElem = 1;
    l->A[0].chave = value;
  } else {
    l->A[l->nroElem].chave = value;
    l->nroElem = l->nroElem + 1;
  }
}

int getIndex(LISTA * l, int value) {
  int i;
  for (i = 0; i < l->nroElem; i++) {
    if (l->A[i].chave == value) return i;
  }
  return -1;
}

bool deleteItem(LISTA * l, TIPOCHAVE ch) {
  int pos, j;

  pos = getIndex(l, ch);

  if (pos == -1) return 1==0;

  for (j = pos; j < l->nroElem; j++) {
    l->A[j] = l->A[j+1];
  }
  return 1==1;
}

int main() {

  LISTA list1;

  int i, index;

  for (i = 0; i < 10; i++) {
    addToList(&list1, i+1);
  }

  showList(&list1);

  index = getIndex(&list1, 2);

  printf("POSITION OF 2: %d\n", index);

  return 0;
}
