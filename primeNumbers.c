#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*The following program is to print out the prime numbers
below an upper limit that would be entered by the user or
above a lower limit that entered by him.
In both cases the Max number is a constant 1000 and if the
lower limit or upper limit exceeds the Max number the prog-
ram would generate a warrning and terminates*/

const int max =1000;
int lwrLimit,uprLimit;
int nmbr;
int primNmbr;

int main()
{
    printf("==========================================================\n");
    printf("=               WELCOME TO PRIME NUMBERS                 =\n");
    printf("==========================================================\n\n");
    printf("Please Enter the Lower Limit:");
    scanf("%d",&lwrLimit);
    if(lwrLimit<2 || lwrLimit>max)
    {
        printf("Wrong Lower Limit\n");
        goto terminate;
    }
    else
    {
        printf("Finding Prime Numbers...\n");
        for(primNmbr=lwrLimit;primNmbr<=max;primNmbr++)
        {
            bool isPrime = true;
            for (nmbr=2;nmbr<primNmbr;nmbr++)
            {
                if (primNmbr%nmbr==0)
                {
                    isPrime=false;
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d\n",primNmbr);
            }
        }
    }
    printf("please Enter The Upper limt:");
    scanf("%d",&uprLimit);
    if(uprLimit<2 || uprLimit>max)
    {
        printf("Wrong Upper Limit\n");
        goto terminate;
    }
    else
    {
        printf("Finding Prime Numbers...\n");
        for(primNmbr=2;primNmbr<=uprLimit;primNmbr++)
        {
            bool isPrime = true;
            for (nmbr=2;nmbr<primNmbr;nmbr++)
            {
                if (primNmbr%nmbr==0)
                {
                    isPrime=false;
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d\n",primNmbr);
            }
        }
    }


    terminate:
    printf("Program terminates\n");
    return EXIT_SUCCESS;
}