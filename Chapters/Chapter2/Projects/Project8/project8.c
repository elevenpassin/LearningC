#include <stdio.h>

float loan, interest, monthly_payment;

float calc_remaining_bal(int month)
{
	float interest_rate = (interest / 100) / 12;

	float balance = loan;

	for (int i = 0; i < month; i++)
	{
		balance = (balance - monthly_payment) + (balance * interest_rate);
	}

	return balance;
}

int main(void)
{
	printf("Enter amount of loan: ");
	scanf_s("%f", &loan);

	printf("Enter interest rate: ");
	scanf_s("%f", &interest);

	printf("Enter monthly payment: ");
	scanf_s("%f", &monthly_payment);

	
	printf("Balance remaining after %d payment(s): $%.2f\n", 1, calc_remaining_bal(1));
	printf("Balance remaining after %d payment(s): $%.2f\n", 2, calc_remaining_bal(2));
	printf("Balance remaining after %d payment(s): $%.2f\n", 3, calc_remaining_bal(3));

	return 0;
}