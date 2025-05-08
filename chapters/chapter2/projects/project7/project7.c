#include <stdio.h>

void bills_needed(void) {
  int amt;
  int b20 = 0, b10 = 0, b5 = 0, b1 = 0;

  printf("Enter amt: ");
  scanf("%d", &amt);

  while (amt > 0) {
    if (amt - 20 >= 0) {
      b20++;
      amt = amt - 20;
    } else if (amt - 10 >= 0) {
      b10++;
      amt = amt - 10;
    } else if (amt - 5 >= 5) {
      b5++;
      amt = amt - 5;
    } else if (amt - 1 >= 0) {
      b1++;
      amt = amt - 1;
    }
  }

  printf("$20 bills: %d\n", b20);
  printf("$10 bills: %d\n", b10);
  printf("$5  bills: %d\n", b5);
  printf("$1  bills: %d\n", b1);
}

void bills_needed_improved(void) {
  int amt;
  int b20 = 0, b10 = 0, b5 = 0, b1 = 0;

  printf("Enter amt: ");
  scanf("%d", &amt);

  b20 = amt / 20;
  amt = amt - (b20 * 20);
  b10 = amt / 10;
  amt = amt - (b10 * 10);
  b5 = amt / 5;
  amt = amt - (b5 * 5);
  b1 = amt / 1;

  printf("$20 bills: %d\n", b20);
  printf("$10 bills: %d\n", b10);
  printf("$5  bills: %d\n", b5);
  printf("$1  bills: %d\n", b1);
}

int main(void) {
  bills_needed_improved();
  return 0;
}