/*
* Project 4:
* 
* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and
* then displays the number in the form xxx.xxx.xxxx:
* 
*		Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
*		You entered 404.817.6900
*
*/


#include <stdio.h>

int main(void) {
	int part1, part2, part3 = 0;

	printf("Enter ISBN:");

	scanf_s("(%d) %d-%d", &part1, &part2, &part3);

	printf("%d.%d.%d", part1, part2, part3);
}