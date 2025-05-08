#include <stdio.h>

int main(void) {
	int age = 12;
	int teenager = age >= 13 && age <= 19;

	printf("%d", teenager);
}