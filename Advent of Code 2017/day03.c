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
#include <stdbool.h>

/* CONSTANTS **************************************************************************************/
#define ROW 20
#define COL 20
#define START_ROW 10
#define START_COL 10
/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/

/* VARIABLES **************************************************************************************/
int posROW = START_ROW;
int posCOL = START_COL;
int inputData = 361527;
bool up;
bool down;
bool left;
bool right;
/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{

    int spiral[ROW][COL] = {0};
    int spiralCounter = 2;
    spiral[START_ROW][START_COL] = 1;
    int square = 1;
    for(int i = 1; square <= inputData; i+=2)
    {
        square = i * i;

        printf("Kreis: %d number: %d\n", i, square);
    }
    

    /* - row UP + row DOWN 
        + col RIGHt - col LEFT */

    // for(int idx = 0; idx < inputData; idx++)
    // {
    //     up = down = left = right = false;
    //     if(spiral[posROW][posCOL + 1] == 0)
    //     {
    //         right = true;
    //     }
    //     if(spiral[posROW][posCOL - 1] == 0)
    //     {
    //         left = true;
    //     }
    //     if(spiral[posROW + 1][posCOL] == 0)
    //     {
    //         down = true;
    //     }
    //     if(spiral[posROW - 1][posCOL] == 0)
    //     {
    //         up = true;
    //     }
    //     /* Everything is true = im at 1  */
    //     if(up == true && 
    //        down == true && 
    //        left == true && 
    //        right == true)
    //     {
    //         spiral[posROW][posCOL + 1] = spiralCounter;
    //         spiralCounter++;
    //         posCOL++;
    //         continue;
    //     }
    //     /* Everything true but left so im moving up (Prio 1) */
    //     if(up == true && 
    //        down == true && 
    //        left == false && 
    //        right == true)
    //     {    
    //         spiral[posROW-1][posCOL] = spiralCounter;
    //         spiralCounter++;
    //         posROW--;
    //         continue;
    //     } 
    //     /* Everything true but down means i still move left (Prio 2)*/  
    //     if(up == true && 
    //        down == false && 
    //        left == true && 
    //        right == true)
    //        {
    //         spiral[posROW][posCOL-1] = spiralCounter;
    //         spiralCounter++;
    //         posCOL--;
    //         continue;
    //        } 
    //     /* Everything is true but right means i can move down (Prio 3)*/          
    //     if(up == true && 
    //        down == true && 
    //        left == true && 
    //        right == false)
    //        {
    //         spiral[posROW + 1][posCOL] = spiralCounter;
    //         spiralCounter++;
    //         posCOL++;
    //         continue;
    //        }
    //     /* Everything is true but up means i can move right (Prio 4)*/    
    //     if(up == true && 
    //        down == false && 
    //        left == true && 
    //        right == true)
    //        {
    //         spiral[posROW][posCOL+1] = spiralCounter;
    //         spiralCounter++;
    //         posCOL++;
    //         continue;
    //        }  


    // }




    // printf("UP: %d, DOWN: %d, LEFT: %d, RIGHT: %d\n", up, down, left, right);


    // for(int i = 0; i < 20;i++)
    // {
    //     printf("\ni: %d ", i);
    //     for(int j = 0; j < 20; j++)
    //     {
    //         printf("%d", spiral[i][j]);
    //     }
    //     printf("\n");
    // }
    
    




    return 0;
}

// void checkForNextpost(){

// }

