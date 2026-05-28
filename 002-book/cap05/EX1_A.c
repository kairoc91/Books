#include <stdio.h>

int main() {

    float i, year, wage, newWage, percentage;
    
    printf("Current year: ");
    scanf("%f", &year);

    wage = 1000;
    percentage = 1.5/100;
    newWage = wage + percentage * wage;

    /*
    for (i = 2007 ; i <= year ; i++) {
    percentage = percentage * 2;
    newWage = newWage + percentage * newWage;
    printf("Wage in %.f: %.2f.\n", i, newWage);
    }
    */

i = 2007;    
    while (i <= year) {
        percentage = percentage * 2;
        newWage = newWage + percentage * newWage;
        printf("Wage in %.f: $ %.2f.\n", i, newWage);
        i ++;
    }
    return 0;
}
