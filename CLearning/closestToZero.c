/***************************************************************************************************
  (c) NewTec GmbH System-Entwicklung und Beratung 2015   -   www.newtec.de
  $URL: https://svn.newtec.zz/CZSMT/CAN-Rack-19Zoll/trunk/DAC-Karte/DAC-Karte-SW/system/Coding/App/Src/CTemplate.c $
***************************************************************************************************/
/**
@addtogroup gggggModule_group gggggModule
@{
@file       xxxxx.c

Enter short description here.

For a detailed description see the detailed description in @ref xxxxx.h

@version    %$Id: CTemplate.c 350 2022-04-14 08:48:14Z heitzmann $
* @}
***************************************************************************************************/

/* INCLUDES ***************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
/* CONSTANTS **************************************************************************************/
#define MAX_INPUT_SIZE 4
/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/
void findClosestToZero(int inputData[]);
int findSumOfArray(int inputData[]);
void setAllElementsToZero(int inputData[]);
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/
int main(int argc, char const *argv[])
{
    int inputData[MAX_INPUT_SIZE] = {-1, 2, 3, -6};

    findClosestToZero(inputData);
    int sumOfArray = findSumOfArray(inputData);
    setAllElementsToZero(inputData);

    printf("Sum of all elements in array: %d", sumOfArray);
    return 0;
}

void findClosestToZero(int inputData[MAX_INPUT_SIZE])
{
    int minSum = 999999999;
    for(int outerIdx = 0; outerIdx < MAX_INPUT_SIZE; outerIdx++)
    {
        int sum = 0;
        for (int innerIdx = 0; innerIdx < MAX_INPUT_SIZE; innerIdx++)
        {
            if(innerIdx == outerIdx )
            {
                continue;
            }
            sum = inputData[innerIdx] + inputData[outerIdx];


            if(abs(sum) < abs(minSum))
            {
                minSum = sum;
            }
        }
        
    }
    printf("Closest to 0: %d\n", minSum);
}

int  findSumOfArray(int inputData[MAX_INPUT_SIZE])
{
    int sum = 0;
    for(int outerIdx = 0; outerIdx < MAX_INPUT_SIZE; outerIdx++)
    {
        sum += inputData[outerIdx];
    }
    
    return sum;
}

void setAllElementsToZero( int * inputData)
{   


    for(int idx = 0; idx < MAX_INPUT_SIZE; idx++)
    {
        inputData[idx] = 0;
    }
        for(int idx = 0; idx < MAX_INPUT_SIZE; idx++)
    {
        printf("%d\n", inputData[idx]);
    }
}