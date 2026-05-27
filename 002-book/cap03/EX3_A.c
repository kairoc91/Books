#include <stdio.h>

int main() {

    float note1, note2, note3, weight1, weight2, weight3, media;

    printf("Type the note: ");
    scanf("%f%*c", &note1);

    printf("Type the weight: ");
    scanf("%f%*c", &weight1);

    printf("Type the note:");
    scanf("%f%*c", &note2);
    
    printf("Type the weight: ");
    scanf("%f%*c", &weight2);

    printf("Type the note: ");
    scanf("%f%*c", &note3);

    printf("Type the weight: ");
    scanf("%f%*c", &weight3);

    media = (note1 * weight1 + note2 * weight2 + note3 * weight3) / (weight1 + weight2 + weight3);

    printf("The average is: %.2f\n", media);

    return 0;
};
