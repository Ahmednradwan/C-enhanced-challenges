#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*This program is to print out the Prime Numbers below an upper limit
that being defined by user, print the First Prime Number above a lower
limit that also being defined by user or print out  the Prime numbers
within a range of integers.
This code has been improved using Functions to enhance code modularity
and readability.
One more modification that would be made is to isolate the fuctions in
a separated .C and .h files to be portable and useful to other projects.*/

const int MAX =1000;
enum mode {upperLimit =1,lowerLimit,withinRange}newMode;
int loLmt, upLmt;

bool isOutOfRange(int number)
{
    if (number<2||number>1000)
    {
        return true;
    }
    else return false;    
}

void printOutOfRange()
{
    printf("Error: 2 < Limit < 1000");
}

bool isPrimeNumber(int num)
{
    for (int count = 2; count < num; count++)
    {
        if (num%count==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
printf("============================================================\n");
printf("                 Welcome To Prime Numbers                   \n");
printf("============================================================\n\n");
Start:
printf("Please Select The Search Mode:\n");
printf("1-Upper Limit   2-Lower Limit   3-Within Range\n");
scanf("%d",&newMode);
switch (newMode)
{
case upperLimit:
    printf("You've selected Upper Limit Mode\n"); 
    printf("Please Enter The Upper Limit:");
    scanf("%d",&upLmt);
    if (isOutOfRange(upLmt))
    {
        printOutOfRange();
    }
    for (int number = 1; number <= upLmt; number++)
    {
        if(isPrimeNumber(number))
        {
            printf("%d\n",number);
        }
    }
    
    break;
case lowerLimit:
    printf("You've selected lower Limit Mode\n");
    printf("Pleass Enter the Lower Limit:");
    scanf("%d",&loLmt);
    if (isOutOfRange(loLmt))
    {
        printOutOfRange();
    }
    for (int number = ++loLmt; number < MAX; number++)  // "++loLmt" to get the 1st prime no. above the low limit even it is a prime number itself.
    {
        if(isPrimeNumber(number))
        {
            printf("The First Prime Number Above %d is: %d",--loLmt,number);    // "--loLmt" to get back the original low limit
            break;
        }
    }
    break;
case withinRange:
    printf("You've selected Within Rang Mode\n");
    break;

default:
    printf("Error Invalid Selection Please Try Again..!\n");
    goto Start;
    break;
}


    return EXIT_SUCCESS;
}