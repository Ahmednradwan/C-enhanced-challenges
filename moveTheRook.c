/**
 * @file moveTheRook.c
 * @author Ahmed N. Radwan (ahmed_n_radwan@hotmail.com)
 * @brief This code is to implement a fuction that takes an input string which is the current position
 *        of the rook in chess game and determine all the available movements and stores them in an array
 *        separated with a space
 *                                    a  b  c  d  e  f  g  h
 *                                 7|__|__|__| * |__|__|__|__|7
 *                                 8|__|__|__| * |__|__|__|__|8
 *                                 6|__|__|__| * |__|__|__|__|6
 *                                 5|* | *| *| R |* |* |* |* |5
 *                                 4|__|__|__| * |__|__|__|__|4
 *                                 3|__|__|__| * |__|__|__|__|3
 *                                 2|__|__|__| * |__|__|__|__|2
 *                                 1|__|__|__| * |__|__|__|__|1
 *                                    a  b  c  d  e  f  g  h 
 * @version 0.1
 * @date 2023-08-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/****************************** Include Section Start ********************************************/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<ctype.h>
#include<string.h>

/******************************* Include Section End *********************************************/


/***************************** Definition Section Start ******************************************/
#define maxUsrIn 3
#define maxlglMoves ((14*2)+13+1)
/****************************** Definition Section End *******************************************/


/************************* Global Decleration Section Start **************************************/

/************************** Global Decleration Section End ***************************************/


/*********************** Sub-Program Decleration Section start ***********************************/
void ioScanStd(uint8_t usrInput[maxUsrIn]);
void findLegalMoves(uint8_t stndPos[maxUsrIn],uint8_t lglMoves[maxlglMoves]);
/************************ Sub-Program Decleration Section End ************************************/


uint8_t main()
{
    uint8_t currentPosition [maxUsrIn];
    uint8_t availableMoves[maxlglMoves];
    ioScanStd(currentPosition);
    printf("%s\n",currentPosition);
    findLegalMoves(currentPosition,availableMoves);
    printf("%s\n",availableMoves);
    return EXIT_SUCCESS;
}

/************************** Sub-Program Definition Section Start *********************************/
void ioScanStd(uint8_t usrInput[maxUsrIn])
/*A function to scan and validate the user inputs from the standard I/O*/
{
    start:
    do
    {
        printf("Please Enter A Valid Rook Position e.g.(d5):");
        scanf("%s",usrInput);
    }while (usrInput[maxUsrIn-1]);
    if (!isalpha(usrInput[0]))
    {
        printf("Sorry!, bad input position\n");
        goto start;
    }
    if (!isdigit(usrInput[1]))
    {
        printf("Sorry!, bad input position\n");
        goto start;
    }
}

void findLegalMoves(uint8_t stndPos[maxUsrIn],uint8_t lglMoves[maxlglMoves])
{
    uint8_t *mvsPtr=lglMoves;
    uint8_t move[maxUsrIn];
    strncpy(move,stndPos,maxUsrIn);
   /*  while (stndPos[0]-'a')
    {
        stndPos[0]--;
        strncpy(move,stndPos,maxUsrIn);
        strncpy(mvsPtr,move,maxUsrIn);
        *mvsPtr='-';
        mvsPtr++;
    } */
    for (uint8_t xInd = 'a'; xInd <= 'h'; xInd++)
    {
        move[0]=xInd;
        strncpy(mvsPtr,move,maxUsrIn);
        //mvsPtr++;
        *mvsPtr=' ';
        mvsPtr++;
    }
    
    
}
/*************************** Sub-Program Definition Section End **********************************/


/**
 ************************************************************************************************** 
 * @name                    @date               @brief
 **************************************************************************************************

 */