#include <stdio.h>

float loan, interest, monthly_payment;

void calc_remaining_bal(int month) {
  float interest_rate = (interest / 100) / 12;

  float balance = loan;

  for (int i = 0; i < month; i++) {
    balance = (balance - monthly_payment) + (balance * interest_rate);
    printf("Balance remaining after %d payment(s): $%.2f\n", i + 1, balance);
  }
}

int main(void) {
  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &interest);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  calc_remaining_bal(10);

  return 0;
}