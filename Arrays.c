#include<stdio.h>
#include<stdlib.h>

#define ARRLEN 7

int main()
{
/* Declaring, definition, and Intialzing Arrays */
    /*Declaring and defining arrays with literal constants*/
    int array_1[7];     // array_1 declared with array size of 7 variables of type Integer.
    //this way the array elements from index[0] to index[6] are to be intialized with garbge values.
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",array_1[i]);
    }

    /*array size may be defined using integer variables*/
    int arrLen = 7;
    int array_2[arrLen];    //here array_2 defined with array size of 7 variables of type Integer.
    //this way the array elements from index[0] to index[arrLen-1] are to be intialized with garbge values.
    printf("\n");
    for (int i = 0; i < arrLen; i++)
    {
        printf("%d ",array_2[i]);
    }

    /*Array initialization from brace-enclosed lists */
    int array_3[]={1, 2, 3, 4, 5, 6, 7};    //declaring array_3 and intializing each element without
                                            //declaring the array size between the aquar brackets[].
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",array_3[i]);
    }

    /* we can't use variables or constant literals between [] in initializing arrays with brace-enclosed lists,
    but we can use macros instead.*/
    int array_4[ARRLEN];    //this way the array elements from index[0] to index[arrLen-1] are to be 
                            //intialized with garbge values.
    printf("\n");
    for (int i = 0; i < ARRLEN; i++)
    {
        printf("%d ",array_4[i]);
    }
    
    int array_5[ARRLEN]={1, 2, 3};  //this way the array elements from index[0] to index[arrLen-1] are to be 
                            //intialized with {1, 2, 3, 0, 0, 0, 0}.
    printf("\n");
    for (int i = 0; i < ARRLEN; i++)
    {
        printf("%d ",array_5[i]);
    }
    
    /*Initializing Arrays with designators (Sparse arraus)*/
    int array_6[ARRLEN]={[1]5 ,[4]11};  //array_6={0, 5, 0, 0, 11, 0, 0}
    printf("\n");
    for (int i = 0; i < ARRLEN; i++)
    {
        printf("%d ",array_6[i]);
    }

    int array_7[ARRLEN]={[1]35, [ARRLEN-1]18};  //array_7={0, 35, 0, 0, 0, 0, 18} this is how to initialize
                                                //the last element programaticlly.
    printf("\n");
    for (int i = 0; i < ARRLEN; i++)
    {
        printf("%d ",array_7[i]);
    }

    int array_8[ARRLEN]={[1]=15, [ARRLEN-3]=22,7,8}; //array_7={0, 15, 0, 0, 22, 7, 8} this is how to initialize
                                                //the last 3 elements programaticlly.
    printf("\n");
    for (int i = 0; i < ARRLEN; i++)
    {
        printf("%d ",array_8[i]);
    }

    return EXIT_SUCCESS;
}