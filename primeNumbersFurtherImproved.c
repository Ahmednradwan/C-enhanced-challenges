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

#define maxUprLimit 1000000
#define primArraySize 100000

uint32_t primeNums[primArraySize];

uint32_t main()
{
    printf("#######################################################################################\n");
    printf("#           Welcome to The Further Improved Prime Numbers Challenge                   #\n");
    printf("#######################################################################################\n");

    return EXIT_SUCCESS;
}
