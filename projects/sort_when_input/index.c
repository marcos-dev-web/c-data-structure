#include <stdio.h>
#include <malloc.h>

#define LEN 5

typedef struct
{
  int array[LEN];
  int currentLength;
} List;

void insertIntoList(List *l, int value)
{
  int prev, current, i, j;

  l->array[l->currentLength] = value;

  if (l->currentLength < LEN)
    l->currentLength++;

  if (l->currentLength > 0)
  {
    for (i = 0; i < l->currentLength; i++)
    {
      for (j = 1; j < l->currentLength; j++)
      {
        prev = l->array[j - 1];
        current = l->array[j];
        if (prev > current)
        {
          l->array[j] = prev;
          l->array[j - 1] = current;
        }
      }
    }
  }
}

void showList(List *l)
{
  int i;
  printf("\n[*] ORDERED:\n| > ");
  for (i = 0; i < l->currentLength; i++)
  {
    if (i < l->currentLength - 1)
    {
      printf("%d > ", l->array[i]);
    }
    else
    {
      printf("%d\n", l->array[i]);
    }
  }
}

int getInput()
{
  int value;

  printf("> ");
  scanf("%d", &value);

  return value;
}

int main()
{
  printf("\n==== RETURN ORDERED ARRAY ====\n");

  List *list = (List *)malloc(sizeof(List));

  list->currentLength = 0;

  for (int i = 0; i < LEN; i++)
  {
    int value = getInput();
    insertIntoList(list, value);
  }

  showList(list);

  return 0;
}
