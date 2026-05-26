#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Type the first note: ");
    scanf("%f%*c", &nota1);

    printf("Type the second note: ");
    scanf("%f%*c", &nota2);

    printf("Type the third note: ");
    scanf("%f%*c", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("The average is: %6.3f\n", media);

    return 0;
};
