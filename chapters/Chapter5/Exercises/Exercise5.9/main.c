#include <stdio.h>

void case_one(int score)
{
	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");
}

void case_two(int score)
{
	if (score < 60)
		printf("F");
	else if (score < 70)
		printf("D");
	else if (score < 80)
		printf("C");
	else if (score < 90)
		printf("B");
	else
		printf("A");
}

int main(void)
{
	int score = 90;

	case_one(score);
	case_two(score);
}

