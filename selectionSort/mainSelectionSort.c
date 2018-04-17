#include <stdio.h>
#include <stdlib.h>

#include "selectionSort.h"

extern void printArray(int *value, int idx);

int main(int argc, char** argv)
{
  int values[] = { 80, 75, 10, 60, 15, 49, 12, 25 };
  int length = sizeof(values) / sizeof(int);

  printf("선택 정렬 실행 전\n");
  printArray(values, length);

  printf("\n");
  printf("선택 정렬 시작\n");
  selectionSort(values, length);

  printf("\n");
  printf("선택 정렬 실행 후\n");

  printArray(values, length);

  return 0;
}
