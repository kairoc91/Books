#include <stdio.h>

int main() {

    float wage, balance, tax;

    printf("Wage value: ");
    scanf("%f", &wage);

    tax = wage * 10 / 100;

    balance = wage + 50 - tax;

    printf(" Wage: $ %.2f\n Tax: $ %.2f\n Bonus: $ 50.0\n Balance: $ %.2f\n", wage, tax, balance);

    return 0;
};
