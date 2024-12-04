/***************************************************************************************************
  (c) NewTec GmbH System-Entwicklung und Beratung 2015   -   www.newtec.de
  $URL: https://svn.newtec.zz/CZSMT/CAN-Rack-19Zoll/trunk/DAC-Karte/DAC-Karte-SW/system/Coding/App/Src/CTemplate.c $
***************************************************************************************************/
/**
@addtogroup gggggModule_group gggggModule
@{
@file       xxxxx.c

Getting and Input.txt and searching the difference bettween smallest pairs.

For a detailed description see the detailed description in @ref xxxxx.h

@version    %$Id: CTemplate.c 350 2022-04-14 08:48:14Z heitzmann $
* @}
***************************************************************************************************/

/* INCLUDES ***************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
/* CONSTANTS **************************************************************************************/

/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/
void bubbleSort(int array[], int RowCount);
int countRows(char fileName[]);
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
    int diffSumm = 0;



    int RowCount = countRows("input.txt"); /**< RowCounter == ArraySize */
    printf("RowCount: %d\n", RowCount);

    int dataLeft[RowCount];
    int dataRight[RowCount];
    int indexCounter = 0;
    
    while(fgets(buffer, sizeof(buffer), file) != NULL){

        char *token = strtok(buffer, "   ");
        dataLeft[indexCounter] = atoi(token);

        while(token != NULL){

            dataRight[indexCounter] = atoi(token);
            token = strtok(NULL, "   ");
            //dataRight[indexCounter] = atoi(token);
        }
        //dataLeft[indexCounter] = buffer[0] - 0x30;
        //dataRight[indexCounter] = buffer[4] - 0x30;
        indexCounter++;
    }
    fclose(file);
    
    for(int i = 0; i < RowCount; i++){

        printf("LeftData: %d RightData: %d\n", dataLeft[i], dataRight[i]);
    }

    bubbleSort(dataLeft, RowCount);
    bubbleSort(dataRight, RowCount);

    for(int i = 0; i < RowCount; i++){

        printf("Sorted LeftData: %d Sorted RightData: %d\n", dataLeft[i], dataRight[i]);
    }
    
    for(int i = 0; i < RowCount; i++){

        // if(dataLeft[i] > dataRight[i]){

        //     diffSumm += (dataLeft[i] - dataRight[i]);
        // }

        diffSumm += abs(dataRight[i] - dataLeft[i]);
    }

    printf("diffSumm: %d", diffSumm);
}

int part2(void){
    
    FILE *file = fopen("input.txt", "r");
    char buffer[50];
    int similarityCount = 0;
    int sumSimilarity = 0;

    int RowCount = countRows("input.txt"); /**< RowCounter == ArraySize */
    printf("RowCount: %d\n", RowCount);

    int dataLeft[RowCount];
    int dataRight[RowCount];
    int indexCounter = 0;
    
    while(fgets(buffer, sizeof(buffer), file) != NULL){

        char *token = strtok(buffer, "   ");
        dataLeft[indexCounter] = atoi(token);

        while(token != NULL){

            dataRight[indexCounter] = atoi(token);
            token = strtok(NULL, "   ");
            //dataRight[indexCounter] = atoi(token);
        }
        //dataLeft[indexCounter] = buffer[0] - 0x30;
        //dataRight[indexCounter] = buffer[4] - 0x30;
        indexCounter++;
    }
    fclose(file);

    for(int dataLeftIdx = 0; dataLeftIdx < RowCount; dataLeftIdx++){
        similarityCount = 0;
        for(int dataRightIdx = 0; dataRightIdx < RowCount; dataRightIdx++){
            
            if(dataLeft[dataLeftIdx] == dataRight[dataRightIdx]){

                similarityCount++;
            }
        }

        sumSimilarity += dataLeft[dataLeftIdx] * similarityCount;
    }

    printf("summSimilarity: %d", sumSimilarity);

}

/* Sorting the data to get the right pairs */
void bubbleSort(int array[], int RowCount){
    int temp = 0;

    for (int outerIdx = 0; outerIdx < RowCount; outerIdx++){

        for (int inneridx = 0; inneridx < RowCount; inneridx++){

            if(array[outerIdx] < array[inneridx]){
                temp = array[outerIdx];
                array[outerIdx] = array[inneridx];
                array[inneridx] = temp;
            }
        }
    }
    
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