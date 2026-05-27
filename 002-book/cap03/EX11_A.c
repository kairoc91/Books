#include <stdio.h>
#include <math.h>

int main(){

    float num, square, cube, r2, r3;

    printf("Enter a number: ");
    scanf("%f", &num);

    //quadrado, cubica, raiz quadrada, raiz cubica
    
    square = pow(num, 2);

    cube = pow(num, 3);

    r2 = sqrt(num);

    r3 = cbrt(num);

        printf(" Number: %.2f\n Squared: %.2f\n Cubed: %.2f\n Square root: %.2f\n Cube root: %.2f\n", num, square, cube, r2, r3);
    return 0;
};
