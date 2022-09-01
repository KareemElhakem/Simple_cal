#include <stdio.h>
#include <stdlib.h>
#include"Functions.h"


int main()
{


    printf("Hi");

    while(1)
    {
        printf("\nPlease enter your first input number : ");
        scanf("%d" , &k);


        printf("\nPlease enter your second input number : ");
        scanf("%d" , &b);


        printf("\nPlease enter the operator : ");
        scanf("%s" , &c);



        Cala(&k , &b , &c);
    }


    return 0;
}