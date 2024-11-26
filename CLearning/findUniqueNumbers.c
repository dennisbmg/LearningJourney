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
#include <stdbool.h>
/* CONSTANTS **************************************************************************************/
#define MAX_INPUT_NUMBER 8 /**< The size of the input data */
/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/
static void findDuplicateNumbers(int numbersToCheck[MAX_INPUT_NUMBER]); /**<IN Function to find duplicate Numbers in test data. */
static void findUniqueNumbers(int numbersToCheck[MAX_INPUT_NUMBER]); /**<IN Function to find unique numbers in test data */
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/
extern void main(void)
{
    /*Filling list with test data*/
    int numbersToCheck[MAX_INPUT_NUMBER] = {5, 7, 1, 5, 2, 5, 6, 8}; 

    /* Call function to find uniqe numbers*/
    findUniqueNumbers(numbersToCheck);

    /* Call function to find non uniqe numbers*/
    findDuplicateNumbers(numbersToCheck);
}
/* INTERNAL FUNCTIONS *****************************************************************************/

static void findDuplicateNumbers(int numbersToCheck[MAX_INPUT_NUMBER]) /**<IN Function to find duplicate Numbers in test data. */
{
    int countDuplicateNumbers = 0;
    bool foundNotUnique = false;

    for(int idx = 0; idx < MAX_INPUT_NUMBER; idx++)
    {
        /* Reset Flag befor compare */
        foundNotUnique = false; 
        /* Inner loop to compare each element in array */
        for (int jdx = 0; jdx < MAX_INPUT_NUMBER; jdx++)
        {   
            /* avoid checking self */
            if(idx == jdx)
            {
                continue;
            }
            /* found duplicate set flag to true and exit the inner loop*/
            if(numbersToCheck[idx] == numbersToCheck[jdx])
            {
                foundNotUnique =  true;
                break;
            }
        }
        /* Check for flag and print the duplicate values and count them  */
        if(foundNotUnique == true)
        {
            printf("Not unique: %d\n", numbersToCheck[idx]);
            countDuplicateNumbers++;
        }
        else
        {
            foundNotUnique = false;
        }

    }
    /* Print the counter of duplicate Numbers*/
    printf("\ncounter: %d\n", countDuplicateNumbers);    
}

/* Function to find unique numbers from test data */
void findUniqueNumbers(int numbersToCheck[MAX_INPUT_NUMBER])/**<IN Function to find unique numbers in test data */
{
    int countUniqueNumbers = 0;
    bool foundDuplicate = false;

    for(int idx = 0; idx < MAX_INPUT_NUMBER; idx++)
    {
        /* Inner loop to compare each element in array*/
        for (int jdx = 0; jdx < MAX_INPUT_NUMBER; jdx++)
        {
            /* avoid checking self */
            if(idx == jdx)
            {
                continue;
            }
            /* if the 2 elements are equal we know its not unique and set flag to true */
            if(numbersToCheck[idx] == numbersToCheck[jdx])
            {
                foundDuplicate =  true;
                break;
            }
        }

        /* Check for flag and print the non unique values and count them */
        if(foundDuplicate == false)
        {
            printf("Unique values: %d\n", numbersToCheck[idx]);
            countUniqueNumbers++;
        }
        else
        {
            foundDuplicate = false;
        }
        
    }
    /* Crint the counter for unique numbers */
    printf("\ncounter: %d\n", countUniqueNumbers);
    
}
