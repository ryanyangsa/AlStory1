#include <stdio.h>
#include <stdlib.h>

#include "selectionSort.h"

void printArray(int *value, int idx)
{
  int i = 0;

  for (; i < idx; i++) {
    printf("%d ", value[i]);
  }

  printf("\n");
}

void selectionSort(int *value, int idx)
{
  int i = 0;
  int j = 0;
  int min = 0;
  int temp = 0;

  for (i = 0; i < idx - 1; i++) {
    min = i;
    
    for (j = i + 1; j < idx; j++) {
      if (value[j] < value[min]) {
        min = j;
      }
    }

    temp = value[i];
    value[i] = value[min];
    value[min] = temp;

    printf("[Step %d] ", i + 1);
    printArray(value, idx);
  }
}
