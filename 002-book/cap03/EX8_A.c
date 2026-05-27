#include <stdio.h>

int main() {

    float deposit, fee, yield, total;

    printf("Enter the value of deposit and fee: ");
    scanf("%f %f", &deposit, &fee);

    yield = deposit * fee / 100;

    total = deposit + yield;

    printf("Yield value: %.2f\n", yield);
    printf("Total value: %.2f\n", total);

    return 0;
};
