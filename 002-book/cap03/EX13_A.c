#include <stdio.h>

int main(){

    float feet, inches, yards, miles;

    printf("Enter the value in feet: ");
    scanf("%f%*c", &feet);

    inches = feet * 12;
    yards = feet / 3;
    miles = yards / 1760;

    printf("\n%.2f feet equals:\n%.2f inches\n%.2f yards\n%.2f miles.\n", feet, inches, yards, miles);
    return 0;
};
