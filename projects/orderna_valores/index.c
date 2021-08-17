#include <stdio.h>

#define LEN 10

int values[LEN] = {0,10,9,2,5,2,1,3,7,4};

void print(char * label) {
  int i;

  printf("\n* %s\n", label);
  printf("[ ");
  for (i = 0; i < LEN; i++) {
    if (i < LEN-1)
      printf("%d, ", values[i]);
    else
      printf("%d", values[i]);
  }
  printf(" ]\n");
}

int main() {

  int i, j, current, prev;

  printf("==== ORDENING LIST ====\n\n");

  print("BEFORE");

  for (i = 0; i < LEN; i++) {
    for (j = 1; j < LEN; j++) {
      prev = values[j-1];
      current = values[j];

      if (prev > current) {
        values[j] = prev;
        values[j-1] = current;
      }
    }
  }

  print("AFTER");

  return 0;
}