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

/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/
int countRows(char fileName[]);
/* PROTOTYPES *************************************************************************************/
int part1();
int part2();
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[]){

    part1();
    part2();
 




    return 0;
}

int part1(void){
    FILE *file = fopen("input.txt", "r");
    char buffer[50];

    int indexCounter = 0;

    while(fgets(buffer, sizeof(buffer), file) != NULL){

        char *token = strtok(buffer, "   ");


        while(token != NULL){


            token = strtok(NULL, " ");

        }
        indexCounter++;
    }
    fclose(file);
}

int part2(void){
    FILE *file = fopen("input.txt", "r");
    char buffer[50];

    int indexCounter = 0;

    while(fgets(buffer, sizeof(buffer), file) != NULL){

        char *token = strtok(buffer, "   ");


        while(token != NULL){


            token = strtok(NULL, "   ");

        }
        indexCounter++;
    }
    fclose(file);
}

/* Counting the Rows to set the right array size */
int countRows(char fileName[]){
    int RowCount = 0;

    FILE *file = fopen(fileName, "r");
    char buffer[256];

    while(fgets(buffer, sizeof(buffer), file) != NULL){
        RowCount++;
    }
    fclose(file);
    return RowCount;
}