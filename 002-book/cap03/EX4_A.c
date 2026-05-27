#include <stdio.h>

int main(){

    float wage, increase, newwage;
    printf("What is the wage?: ");
    scanf("%f", &wage);

    increase = wage * (25.0 / 100.0);

    printf("Increase 25%%: %.2f\n", increase);

    newwage = wage + increase;

    printf("The new wage is: $ %.2f\n", newwage);

    return 0;
};
