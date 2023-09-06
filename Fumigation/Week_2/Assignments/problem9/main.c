#include <stdio.h>

void checkBalance(float *);
void depositMoney(float *);
void withdrawMoney(float *);

int main() {
  int choice;
  float accountBalance = 0;

  do {
    printf("________________________\n");
    printf("|          ATM         |\n");
    printf("1.Check Balance.\n");
    printf("2.Deposit Money.\n");
    printf("3.Withdraw Money.\n");
    printf("0.Exit.\n");
    printf("Entetr your Choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      checkBalance(&accountBalance);
      break;
    case 2:
      depositMoney(&accountBalance);
      break;
    case 3:
      withdrawMoney(&accountBalance);
      break;
    case 0:
      printf("Exiting...");
      break;
    default:
      printf("Invalid Option.");
    }

  } while (choice != 0);

  return 0;
}

void checkBalance(float *balance) {
  printf("Your Account Balance is: %.2f\n", *balance);
}
void depositMoney(float *balance) {
  float money = 0;
  printf("Enter your Amount: ");
  scanf("%f", &money);
  *balance += money;
  printf("%.2f Deposited Successully.\n", money);
}
void withdrawMoney(float *balance) {
  float money = 0;
  printf("Enter your Amount: ");
  scanf("%f", &money);
  if (money > *balance) {
    printf("Insufficiant Balance.\n");
  } else {
    *balance -= money;
    printf("%.2f Withdrawn Successully.\n", money);
  }
}
