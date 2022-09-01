#include"Functions.h"



void Cala(int *x , int *y , char *op)
{
    int result;

    if(*op == '+')
    {
        result = *x + *y;
        printf("\nThe Sum of your input numbers = %d" , result);
    }

    else if(*op == '-')
    {
        result = *x - *y;
        printf("\nThe sub of your input numbers = %d" , result);
    }

    else if(*op == '*')
    {
        result = *x * *y;
        printf("\nThe multiplication of your input numbers = %d" , result);
    }

    else if(*op == '/')
    {
        result = *x / *y;
        printf("\nThe division of your input numbers = %d" , result);
    }




    else
    {
        printf("\nInvalid Input !!");
    }


}
