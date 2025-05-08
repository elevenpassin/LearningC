#include <stdio.h>

int main(void) {
  printf("Enter a two-digit number: ");

  int i;

  scanf_s("%d", &i);

  int x = i / 10;
  int y = i % 10;

  printf("%d%d", y, x);
}