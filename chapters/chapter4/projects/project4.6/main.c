/* Computes a European Article Number (EAN) check digit */

#include <stdio.h>

int main(void) {
  int i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, j6, first_sum, second_sum,
      total;

  unsigned long long ean = 869148426000;

  // printf("Enter the first 12 digits of a EAN: ");
  // scanf_s("%llu", &ean);

  int group1 = (ean % (unsigned long long)1000000000000LL) / 1000000;

  i1 = group1 / 100000;
  i2 = (group1 % 100000) / 10000;
  i3 = (group1 % 10000) / 1000;
  i4 = (group1 % 1000) / 100;
  i5 = (group1 % 100) / 10;
  i6 = group1 % 10;

  int group2 = (ean % (unsigned long long)1000000LL);

  j1 = group2 / 100000;
  j2 = (group2 % 100000) / 10000;
  j3 = (group2 % 10000) / 1000;
  j4 = (group2 % 1000) / 100;
  j5 = (group2 % 100) / 10;
  j6 = group2 % 10;

  first_sum = i2 + i4 + i6 + j2 + j4 + j6;
  second_sum = i1 + i3 + i5 + j1 + j3 + j5;

  total = second_sum + (3 * first_sum);

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
  printf("Check digit (another approach - shouldn't work): %d\n",
         10 - (total % 10));
  printf("Check digit (another another approach - maybe works?): %d\n",
         (10 - (total % 10)) % 10);
  return 0;
}
