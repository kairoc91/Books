#include <stdio.h>

int main() {

    float wage, porcentege, increase, newwage;

    printf("What is the wage? ");
    scanf("%f", &wage);

    printf("What is the porcentege increase? ");
    scanf("%f", &porcentege);

    increase = wage * porcentege / 100;

    printf("Your increase is: $ %.2f\n", increase);

    newwage = wage + increase;

    printf("The new wage is: $ %.2f\n\n", newwage);

    return 0;
};
