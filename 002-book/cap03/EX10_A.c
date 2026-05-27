#include <stdio.h>

int main(){

    float area, radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.1415 * (radius * radius);

    printf("Area: %.2f\n", area);

    return 0;
};
