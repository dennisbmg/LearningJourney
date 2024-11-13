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
#include <string.h>
#include <stdbool.h>
/* CONSTANTS **************************************************************************************/

/* MACROS *****************************************************************************************/
#define X 25
#define Y 25
/* TYPES ******************************************************************************************/
typedef enum
{
    DIR_Y_PLUS = 0,
    DIR_Y_MINUS,
    DIR_X_PLUS,
    DIR_X_MINUS,

}DirName;

enum
{
    DIR_R = 0,
    DIR_L = 1,
};

/* PROTOTYPES *************************************************************************************/
void getFileInput(char *fileInput);

/* VARIABLES **************************************************************************************/
int inputLength;
char *inputString;
bool matrix[50][50] = {false};
int startX = X;
int startY = Y;
int x = X, y = Y;
int endX, endY;
int blocksAway;
int moveCounter = 0;
char prevMove;
int rightCounter = 0;
int leftCounter = 0;

DirName myDir = DIR_Y_PLUS;

int dirConst[2] = {0,0};
char myData[][3] = {
    "R2",
    "L5",
    "R3"};




/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/
int main(int argc, char const *argv[])
{
    int myFactor = 0;
    int myPosX = 25;
    int myPosY = 25;
    dirConst[DIR_R] = 1;
    dirConst[DIR_L] = -1;
    bool newDirIsX = true;
    int dir = 'R';


    for (int i = 0; i < 3; i++)
    {
        


        if( myDir ==  DIR_Y_PLUS || myDir ==  DIR_Y_MINUS)
        {
            newDirIsX = true;
        }
        else
        {
            newDirIsX = false;
        }


        if( myDir ==  DIR_Y_PLUS || myDir ==  DIR_X_MINUS )
        {
            //L = -x, R = +x
            dirConst[DIR_R] = 1;
            dirConst[DIR_L] = -1;
        }
        else if( myDir ==  DIR_Y_MINUS || myDir ==  DIR_X_PLUS )
        {
            //R = -x, L = +x
            dirConst[DIR_R] = -1;
            dirConst[DIR_L] = 1;
        }


        dir = myData[i][0];

        if(dir  == 'R')
        {
            myFactor = dirConst[DIR_R];
        }
        else
        {
            myFactor = dirConst[DIR_L];
        }

        if( newDirIsX == true)
        {
            myPosX += (myFactor *  (myData[i][1]-0x30));
        }
        else
        {
            myPosY += (myFactor *  (myData[i][1]-0x30));
        }

    }
    printf("")

    // char inputArray[inputLength];
    // getFileInput("input.txt");
    // char *token;
    // //printf("%d\n", inputLength);
    // //printf("InputString: %s", inputString);

    //     token = strtok(inputString, ", ");
    //     while(token != NULL)
    //     {
    //         printf("Token: %s\n", token);

    //         switch(token[0])
    //         {
    //             case 'R':
    //                 moveCounter = atoi(token[1]);
    //                 if(rightCounter == 0 && leftCounter == 0)
    //                 {
    //                     y += moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 1 && leftCounter == 0)
    //                 {
    //                     x += moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 2 && leftCounter == 0)
    //                 {
    //                     y -= moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 3 && leftCounter == 0)
    //                 {
    //                     x -= moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }
    //                  if(rightCounter == 1 && leftCounter == 1)
    //                 {
    //                     x -= moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 2 && leftCounter == 2)
    //                 {
    //                     y -= moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 3 && leftCounter == 3)
    //                 {
    //                     x += moveCounter;
    //                     rightCounter = (rightCounter + 1) % 4;
    //                 }                                       
    //                 break;

    //             case 'L':
    //                 moveCounter = atoi(token[1]);

    //                 if(rightCounter == 0 && leftCounter == 0)
    //                 {
    //                     y -= moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 0 && leftCounter == 1)
    //                 {
    //                     x += moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 0 && leftCounter == 2)
    //                 {
    //                     y += moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 0 && leftCounter == 3)
    //                 {
    //                     x += moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 1 && leftCounter == 1)
    //                 {
    //                     x += moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 2 && leftCounter == 2)
    //                 {
    //                     y += moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }
    //                 if(rightCounter == 3 && leftCounter == 3)
    //                 {
    //                     x += moveCounter;
    //                     leftCounter = (leftCounter + 1) % 4;
    //                 }                    
    //                 break;
    //         }


    //         token = strtok(NULL, ", ");
    //     }

    //     int blocksAway = (endX - startX) + (endY - startY);

    return 0;


}

void getFileInput(char *fileInput)
{
    int arrayIndex = 0;
    FILE *file = fopen(fileInput, "r");
    char buffer[10000];

    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {
        inputLength = strlen(buffer);
        inputString = buffer; 
    }
    fclose(file);
}
