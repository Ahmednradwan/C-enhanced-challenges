/**
 * @file integers.c
 * @author Ahmed N. Radwan (ahmed_n_radwan@hotmail.com)
 * @brief The below code is to introduce the different representations of the integer and float numbers.  
 * @version 0.1
 * @date 2023-08-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main()
{
    unsigned int students =25u;
    unsigned long long int worldPopulation=7801235945ull;
    uint8_t count = UINT8_MAX;
    float pi= 3.142857;
    double frac=0.000000000000009512;

    printf("%12u | Students in the class\n", students);
    printf("%12llu | Population of the world now\n",worldPopulation);
    printf("%12u | count of something\n",count);
    printf("%12.3f | pi with 3 digits precision\n",pi);
    printf("%12.2e | pi with 3 digits precision\n",pi);
    printf("%12.3f | pi with 3 digits precision\n",frac);
    printf("%12.3e | pi with 3 digits precision\n",frac);

    return EXIT_SUCCESS;
}