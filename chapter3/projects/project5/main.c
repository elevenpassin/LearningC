/*
 * Project 5:
 *
 * Write a program that asks the user to enter the numbers from 1 to 16 (in any
 *order) and then displays the numbers in a 4 by 4 arrangement, followed by the
 *sums of the rows, columns, and diagonals:
 *
 *		Enter the numbers from 1 to 16 in any order:
 *		16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 *		16  3  2 13
 *		 5 10 11  8
 *		 9  6  7 12
 *    4 15 14  1
 *
 *		Row sums: 34 34 34 34
 *		Column sums: 34 34 34 34
 *		Diagonal sums: 34 34
 *
 * If the row, column and diagonal sums are all the same (as they are in this
 *example), the numbers are said to form a magic square. The magic square shown
 *here appears in a 1514 engraving by artist and mathematician Albrecht D�rer.
 *(Note that the middle numbers in the last row give the date of the engraving.)
 *
 */

#include <stdio.h>

int main(void) {
  int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15 = 0;

  printf("Enter the numbers from 1 to 16 in any order:\n");

  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i0, &i1, &i2, &i3,
          &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12, &i13, &i14, &i15);

  printf("\n%2d %2d %2d %2d\n", i0, i1, i2, i3);
  printf("%2d %2d %2d %2d\n", i4, i5, i6, i7);
  printf("%2d %2d %2d %2d\n", i8, i9, i10, i11);
  printf("%2d %2d %2d %2d\n\n", i12, i13, i14, i15);

  int r1 = i0 + i1 + i2 + i3;
  int r2 = i4 + i5 + i6 + i7;
  int r3 = i8 + i9 + i10 + i11;
  int r4 = i12 + i13 + i14 + i15;

  int c1 = i0 + i4 + i8 + i12;
  int c2 = i1 + i5 + i9 + i13;
  int c3 = i2 + i6 + i10 + i14;
  int c4 = i3 + i7 + i11 + i15;

  int d1 = i0 + i5 + i10 + i15;
  int d2 = i3 + i6 + i9 + i12;

  printf("Row sums: %d %d %d %d\n", r1, r2, r3, r4);
  printf("Column sums: %d %d %d %d\n", c1, c2, c3, c4);
  printf("Diagonal sums: %d %d\n", d1, d2);
}