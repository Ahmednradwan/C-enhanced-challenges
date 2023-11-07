#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

/* The below code is dedicated to generate a random matrix and display it in both direct and transposed forms.
* The user should enter the No. of rowa and columns and should not exceed 10.
* The numbers in the matrix will be generated randomly by the code and range from 0 and less than an upper limit.
* the upper should be given by the user.
*
* Inputs:   No. of Rows - No. of Columns - The Upper Limit
* Checks:   1 < No. of Rows <= 10
*           1 < No. of Columns <= 10
*           1 < Upper Limit <= 1000
* Outputs:  Random generated matrix which displayed in direct and transposed form.
*/

#define maxNoOfRows 10
#define maxNoOfColumns 10
#define maxUpperLimit 1000
#define lowerLimit 1

enum rangeCheck {rangeOk,outOfLimits};

int checkRange (int *input, int max, int min)
{
    if (*input> min & *input <= max)
    {
        return rangeOk;
    }
    else
    {
        return outOfLimits;
    }
}

void generateArray(int *r, int *c, int *limit)
{
    int array[*r][*c];
    for (int i = 0; i < *r; i++)
    {
        for (int j = 0; j < *c; j++)
        {
            array[i][j]= rand()%100;
        }
    }
    
    for (int i = 0; i < *r; i++)
    {
        for (int j = 0; j < *c; j++)
        {
            printf("%3d ",array[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    printf("====================| Welcome To Random Matrix |==================\n");
    int rows,columns,maxLimit;
    
    do
    {
        printf("Please Enter No. of Rows (1 < No. of Rows <= 10):");
        scanf("%d",&rows);
    } while (checkRange(&rows,maxNoOfRows,lowerLimit));

    do
    {
        printf("Please Enter No. of Columns (1 < No. of Columns <= 10):");
        scanf("%d",&columns);
    } while (checkRange(&columns,maxNoOfColumns,lowerLimit));

    do
    {
        printf("Please Enter The Max. Value for The Array Element (1 < Max. Value < 1000):");
        scanf("%d",&maxLimit);
    } while (checkRange(&maxLimit,maxUpperLimit,lowerLimit));

    generateArray(&rows,&columns,&maxLimit);

    
    return EXIT_SUCCESS;
}