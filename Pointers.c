/*Pointers*/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


int main()
{
    char a='A';
    char b='B';
    unsigned x='E';
    unsigned y='F';
    char *ptrChar;
    int *ptrInt;
    void *ptrVd;
    int *ptrNl = NULL;

    ptrChar=&a;
    printf("1| %c, %c, 0X%X, %u \n",a,*ptrChar,ptrChar,ptrChar);
    ptrChar=&b;
    printf("2| %c, %c, 0X%X, %u \n",b,*ptrChar,ptrChar,ptrChar);
    *ptrChar='C';
    printf("3| %c, %c, 0X%X, %u \n",b,*ptrChar,ptrChar,ptrChar);
    (*ptrChar)++;
    printf("4| %c, %c, 0X%X, %u \n",b,*ptrChar,ptrChar,ptrChar);
    ptrChar=(char*)&x;
    printf("5| %d, %c, 0X%X, %u,%X \n",x,*ptrChar,ptrChar,ptrChar,&x);
    ptrChar=(char*)&y;
    printf("6| %d, %c, 0X%X, %u,%X \n",y,*ptrChar,ptrChar,ptrChar,&y);
    x=0XABCD1234;
    ptrChar=(char*)&x;
    printf("7| %u,0X%X, %c, 0X%X, %u,%X \n",x,x,*ptrChar,ptrChar,ptrChar,&x);
    *ptrChar='C';
    printf("8| %u,0X%X, %c, 0X%X, %u,%X \n",x,x,*ptrChar,ptrChar,ptrChar,&x);
    ptrInt=&x;
    *ptrInt='C';
    printf("9| %u,0X%X, %c, 0X%X, %u,%X \n",x,x,*ptrInt,ptrInt,ptrInt,&x);
    if (ptrNl)
    {
        printf("10|%d\n",*ptrNl);   // trying to access an invalid memory address. Program will be crashed upon this line execution.

    }
    else
    {
        printf("Error !! Trying to access an invalid memory address using \"Null Pointer\"\n");
    }
    
    printf("==========Finished Successfully==========\n");
    
 

    
    
    return EXIT_SUCCESS;
}