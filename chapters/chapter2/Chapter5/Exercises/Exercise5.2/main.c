#include <stdio.h>

void a(void) {
	int i = 10, j = 5;

	printf("%d", !i < j);
}

void b(void) {
	int i = 2, j = 1;
	printf("%d", !!i + !j);
}

void c(void) {
	int i = 5, j = 0, k = -5;
	printf("%d", i && j || k);
}

void d(void) {
	int i = 1, j = 2, k = 3;
	printf("%d", i < j || k);
}

int main(void) {
	//a();
	//b();
	//c();
	d();
}

