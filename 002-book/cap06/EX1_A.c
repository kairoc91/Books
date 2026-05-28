#include <stdio.h>

int main() 
{

    //Variables
    int n[9], i, j, cont;

    //Receive 9 numbers
    for (i = 0 ; i <= 8 ; i++) 
    {
        printf("Enter a number for position %d:", i);
        scanf("%d", &n[i]);
    }

    
    for (i = 0 ; i <= 8 ; i++) 
    {
    
        cont = 0;

        //
        for (j = 1 ; j <= n[i] ; j++)
        {
            
            //
            if ((n[i] % j) == 0) 
            {
                cont += 1;
            }
        }

        if (cont <= 2 && n[i] > 1) 
        {
            printf("\nPrime number: %d\n", n[i]);
            printf("At index: %d\n", i);
        }


    }

    return 0;
}
