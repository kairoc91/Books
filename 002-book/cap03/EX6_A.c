#include <stdio.h>

int main() {

double wage, bonus, tax, balance;

printf("Wage value: ");
scanf("%lf", &wage);

bonus = wage * 5 / 100;
tax = wage * 7 / 100;
balance = wage + bonus - tax;

printf("\n Wage $ %.2lf\n Bonus $ %.2lf\n Tax $ %.2lf\n Balance $ %.2lf\n", wage, bonus, tax, balance);

    return 0;
};
