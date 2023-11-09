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

    return EXIT_SUCCESS;
}