#include <stdio.h>

int main(void) {
  printf("Enter a 3 digit number: ");

  int i;

  scanf("%d", &i);

  int first = i / 100;
  int rem = i % 100;
  int second = rem / 10;
  int third = rem % 10;

  printf("%d%d%d", third, second, first);
}