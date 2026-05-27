#include <stdio.h>
#include <math.h>

int main(){

    float n1, n2, e1, e2;
    
    do {   
    printf("Enter the value to x and y (greater than 0): ");
        scanf("%f %f", &n1, &n2);
    } while (!(n1 > 0 && n2 > 0));

        e1 = pow(n1, n2);
        e2 = pow(n2, n1);

        printf("x^y = %f\ny^x = %f\n", e1, e2);


    return 0;
};
