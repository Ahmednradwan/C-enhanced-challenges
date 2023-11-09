/**
 * @file primeNumbersFurtherImproved.c
 * @author Ahmed Nour Mohamed Radwan (ahmed_n_radwan@hotmail.com)
 * @brief The goal of this code is to implement an enhanced algorithm to find the prime numbers
 *        below an upper limit that greater than 2 and less than or equal to 1M, using the division by 
 *        prime numbers between 2 and sqrt(n).
 *        The found prime numbers should be stored in a 100k array of integers, then an algorithm for 
 *        printing 50 of them should be implemented.
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<inttypes.h>
#include<stdbool.h>

#define maxUprLimit 1000000
#define primArraySize 100000
#define maxPrntCount 50

uint32_t takeVlidate(uint32_t userInput);
bool isPrimeNum(uint32_t num);
void printPrimeNum(void);

uint32_t primeNums[primArraySize];

uint32_t main()
{
    uint32_t uprLimit=0;
    uint32_t arryInd=0;
    printf("\n#######################################################################################\n");
    printf("#           Welcome to The Further Improved Prime Numbers Challenge                   #\n");
    printf("#######################################################################################\n\n");
    uprLimit=takeVlidate(uprLimit);
    printf("%d\n", uprLimit);
    for (uint32_t number = 2; number <= uprLimit; number++)
    {
        if (isPrimeNum(number))
        {
            primeNums[arryInd++]=number;
            printf("%d\n",number);
        }
        else
        {
            continue;
        }
        
    }
    printPrimeNum();

    return EXIT_SUCCESS;
}

uint32_t takeVlidate(uint32_t userInput)
{
    do
    {
        printf("Please Enter The Upper limit: ");
        scanf("%d",&userInput);
        if ((userInput<=2)||(userInput>maxUprLimit))
        {
            printf("Wrong Upper Limit ! Try again..\n");
        }
    } while ((userInput<=2)||(userInput>maxUprLimit));
    return userInput;   
}

bool isPrimeNum(uint32_t num)
{
    if ((num % ((uint32_t)sqrt(num)))==0)   // Very Important Note: the modulus operator doesn't accept float/double operands
    {
        return false;
    }
    else
    {
        for (uint32_t prmIndx = 0; primeNums[prmIndx] < sqrt(num); prmIndx++)
        {
            if (num%primeNums[prmIndx]==0)
            {
                return false;
            }
            else
            {
                continue;
            }
            
        }
        return true;
    }   
}

void printPrimeNum(void)
{
    for (uint32_t indx = 0; indx < maxPrntCount; indx++)
    {
        printf("[%d] %d\n",indx,primeNums[indx]);
    }
    
}