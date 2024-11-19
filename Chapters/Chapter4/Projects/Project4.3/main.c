#include <stdio.h>

int main(void) {
	int
		first = 0,
		second = 0,
		third = 0;

	printf("Enter first digit:\n");
	scanf_s("%d", &first);

	printf("Enter second digit:\n");
	scanf_s("%d", &second);

	printf("Enter third digit:\n");
	scanf_s("%d", &third);

	printf("The reversed number is: %d%d%d\n", third, second, first);

	return 0;
}