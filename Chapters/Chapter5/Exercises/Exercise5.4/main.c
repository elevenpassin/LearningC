#include <stdio.h>

int main(void) {
	int i = 0;
	int j = 1;
	printf("%d", i < j ? -1 : i == j ? 0 : 1);
}