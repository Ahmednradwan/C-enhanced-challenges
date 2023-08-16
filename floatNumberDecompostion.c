#include<stdio.h>
#include<stdlib.h>

/*
wile (n/)
593.426 =====> 593+0.426
593.426 % 10 = 3
593.426 % 100 = 93
593.426 % 1000 = 593
*/
void decompose(float *n,int *i,float *f)
{
    *i=(int)*n;
    *f = *n-*i;
}

int main()
{
    printf("========== Welcome To Float Number Decomposition ==========\n\n");
    printf("Please Enter A Decimal Point Number:");

    float number,fractionPart;
    int integerPart;
    float *nmbrRef=&number;
    float *frac=&fractionPart;
    int *intgr=&integerPart;
    scanf("%f",&number);
    decompose(nmbrRef,intgr,frac);
    printf("The Original Number is:% f\n",number);
    printf("The Integer Part is:% d\n",integerPart);
    printf("The Fraction Part is:% f\n",fractionPart);

    printf("=================== End Of Program ====================");
     
    return EXIT_SUCCESS;
}