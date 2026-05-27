#include <stdio.h>

int main() {

    float n1, n2, n3, media;

    printf("Enter the lab grade: ");
    scanf("%f", &n1);

    printf("Enter the semester grade: ");
    scanf("%f", &n2);

    printf("Enter the final exam grade: ");
    scanf("%f", &n3);

    media = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("\nAverage: %.2f\n", media);

            if ((media >= 8 && media <= 10)) {
                printf("Grade: A\n");
            } else if ((media >= 7 && media < 8)){
                printf("Grade: B\n");
            } else if ((media >= 6 && media < 7)) {
                printf("Grade: C\n");
            } else if ((media >= 5 && media < 6)) {
                printf("Grade: D\n");
            } else {
                printf("Grade: E\n");
            }

    return 0;
};
