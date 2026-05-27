#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, soma;
   
    printf("Type a number: ");
    scanf("%d%*c", &n1);

    printf("Type a number: ");
    scanf("%d%*c", &n2);

    printf("Type a number: ");
    scanf("%d%*c", &n3);

    printf("Type a number: ");
    scanf("%d%*c", &n4);

    soma = n1 + n2 + n3 + n4;

    printf("%d\n", soma);
    
    return 0;
}
