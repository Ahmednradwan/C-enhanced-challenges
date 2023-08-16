/*Pointers*/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


int main()
{
    char a='A';
    char b='B';
    char *ptrChar;
    int *ptrInt;
    void *ptrVd;
    int *ptrNl = NULL;

    ptrChar=&a;
    printf("1| %c, %c, %p, %u \n",a,*ptrChar,ptrChar,ptrChar);
    ptrChar=&b;
    printf("2| %c, %c, %p, %llx \n",b,*ptrChar,ptrChar,ptrChar);
    
    

    return EXIT_SUCCESS;
}