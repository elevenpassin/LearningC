/*
 * Project 2:
 *
 *	Write a program that formats product information entered by the user. A
 *session with the program should look like this:
 *
 *		Enter item number: 583
 *		Enter unit price: 13.5
 *		Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 *		Item	Unit	    Price
 *					Price	    Date
 *		583		$  13.50	10/24/2010
 *
 *		The item number and date should be left justified; the unit
 *price should be right justified. Allow dollar amounts up to $9999.99. Hint:
 *Use tabs to line up the columns.
 */

#include <stdio.h>

int main() {
  int itemNumber;
  float unitPrice;
  int year;
  int month;
  int day;

  printf("Enter item number: ");
  scanf_s("%d", &itemNumber);
  printf("Enter unit price: ");
  scanf_s("%f", &unitPrice);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf_s("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\t\tPrice\n");
  printf("\tPrice\t\tDate\n");
  printf("%-d\t$%7.2f\t%-2.d/%-2.d/%-d", itemNumber, unitPrice, month, day,
         year);

  return 0;
}