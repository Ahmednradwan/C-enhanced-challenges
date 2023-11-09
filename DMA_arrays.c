/**
 * @file      DMA_arrays.c
 * @author    Ahmed Nour Mohamed Radwan (ahmed_n_radwan@hotmail.com)
 * @brief     Declaring, intializing, and accessing arrays using Dynamic Memory Allocation
 * @version   0.1
 * @date      2023-11-07
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int len;
    int rows, columns;
    printf("\n=====================================================================================\n");
    printf("                Declaring Arrays Using Dynamic Memory Allocation\n");
    printf("\n=====================================================================================\n");
    printf("Please Enter Array Length:");
    scanf("%d",&len);
    int *arr = malloc(len*sizeof(int));
    if (arr)
    {
        for (int indx_arr = 0; indx_arr < len; indx_arr++)
        {
            arr[indx_arr]=rand()%100;
        }
        for (int  indx_arr = 0; indx_arr < len; indx_arr++)
        {
            printf("%3d ",arr[indx_arr]);
        }
        printf("\n");
    }
    else
    {
        printf("Error!! Failed to allocate memory\n");
    }
    printf("\n=====================================================================================\n");
    printf("                Declaring Matrices Using Dynamic Memory Allocation\n");
    printf("\n=====================================================================================\n");
    printf("Please Enter No. of Rows:");
    scanf("%d",&rows);
    printf("Please Enter No. of Columns:");
    scanf("%d",&columns);
    int **mat=malloc(rows*sizeof(int *));
    for (int rwIndx = 0; rwIndx < rows; rwIndx++)
    {
        mat[rwIndx]=malloc(columns*sizeof(int));
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            // mat[rows][columns]=rand()%100; (this is the wrong way to access the matrix).
            *(*(mat+i)+j)=rand()%100;   //this is the correct way.
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%3d ",*(*(mat+i)+j));
        }
        printf("\n");
    }
    printf("Done Successfully !!");
    return EXIT_SUCCESS;
}