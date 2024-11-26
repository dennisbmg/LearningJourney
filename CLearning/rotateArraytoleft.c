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
/* CONSTANTS **************************************************************************************/
#define MAX_NUMBER_INPUT 4
/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/
void shiftPosLeft(int inputData[MAX_NUMBER_INPUT], int posAmount);
void shiftPosRight(int inputData[MAX_NUMBER_INPUT], int posAmount);
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/
int main(void)
{
    int posShiftLeft = 3;
    int posShiftRight = 2;
    int inputData[MAX_NUMBER_INPUT] = {5, 4, 7, 3};

    //shiftPosLeft(inputData, posShiftLeft);
    shiftPosRight(inputData, posShiftRight);
    return 0;
}

void shiftPosLeft(int inputData[MAX_NUMBER_INPUT], int posShiftLeft)
{
    int firstPos = 0;
    int shiftLeftCounter = 0;

    while(posShiftLeft != shiftLeftCounter)
    {
      for(int idx = 0; idx < MAX_NUMBER_INPUT; idx++)
      { 
        if(idx == 0)
        {
          firstPos = inputData[idx];
          printf("firstPos: %d\n", firstPos);
        }
        if(idx == MAX_NUMBER_INPUT - 1)
        {
          inputData[idx] = firstPos;
          continue;
        }
        inputData[idx] = inputData[idx + 1];
      }

      for (int idx = 0; idx < MAX_NUMBER_INPUT; idx++)
      {
        printf("Inputdata after swap %d\n", inputData[idx]);
      }   
      shiftLeftCounter++;
    }

}

void shiftPosRight(int inputData[MAX_NUMBER_INPUT], int posShiftRight)
{
    int lastPos = 0;
    int shiftRightCounter = 0;
    int temp = 0;

    while(posShiftRight != shiftRightCounter)
    {
      for(int idx = MAX_NUMBER_INPUT-1; idx >= 0; idx--)
      { 
        if(idx == MAX_NUMBER_INPUT - 1)
        {
          lastPos = inputData[MAX_NUMBER_INPUT - 1];
          printf("lastPos: %d\n", lastPos);

        }
        if(idx == 0)
        {
          inputData[0] = lastPos;
          continue;
        }
        inputData[idx] = inputData[idx - 1];

      }

      for (int idx = 0; idx < MAX_NUMBER_INPUT; idx++)
      {
        printf("Inputdata after swap %d\n", inputData[idx]);
      }   
      shiftRightCounter++;
    }
}