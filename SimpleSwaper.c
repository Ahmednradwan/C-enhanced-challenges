#include<stdio.h>
#include<stdlib.h>

int swap(int *n1Ptr,int *n2ptr)
{
    int temp;
    temp=*n2ptr;
    *n2ptr=*n1Ptr;
    *n1Ptr=temp;
    return EXIT_SUCCESS;
}

int main()
{
    printf("*=================Welcome To Simple Swapper====================*\n");
    printf("please ENTER the two integers to be swapped...\n");
    int num1,num2;
    int *num1Ptr = &num1;
    int *num2Ptr= &num2;
    printf("The 1st Integer is:");
    scanf("%d",&num1);
    printf("The 2nd Integer is:");
    scanf("%d",&num2);
    swap(num1Ptr,num2Ptr);
    printf("Number1: %d\n",num1);
    printf("Number2: %d\n",num2);

    return  EXIT_SUCCESS;
}