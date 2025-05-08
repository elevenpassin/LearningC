#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number between 0 and 32767: ");
	scanf_s("%d", &num);

	int last = num % 8;

	int fourth = (num / 8) % 8;
	int third = ((num / 8) / 8) % 8;
	int second = (((num / 8) / 8) / 8) % 8;
	int first = ((((num / 8) / 8) / 8) / 8) % 8;

	printf("In octal, your number is: %d%d%d%d%d", first, second, third, fourth, last);

	return 0;
}