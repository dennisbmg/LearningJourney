/**********************************************************************
 * Autor:
 * Datum:
 * Brief:
 *********************************************************************/


/* Includes *********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


/* constants *******************************************/

#define MAIN_LINE_LENGTH_MAX 31 /**< Max Length of a line */
#define STEP_RIGHT 1
#define STEP_DOWN 2
/* Types ***********************************************/

// typedef struct 
// {
//     char *name;
//     uint16_t posX;   
//     uint16_t posY;
// }CoordData;

/* variables *******************************************/
static uint32_t gZeilen = 0;
static uint16_t gLineLengthMax = MAIN_LINE_LENGTH_MAX;

/* Protypes ***************************************************************/
static void getLineCount(void);

/* Extern functions *******************************************************/

int main(int argc, char const *argv[])
{
    getLineCount();
    
    FILE *file = fopen("input.txt", "r");
    char buffer[256];
    
    char inputPattern[gZeilen][gLineLengthMax];
    uint16_t posY = 0;
    uint16_t posX = 0;
    uint16_t lineCounter = 0;
    uint16_t treeCounter = 0;
    
    while(fgets(buffer, sizeof(buffer), file) != NULL){
        for(int idx = 0; buffer[idx] != '\0'; idx++){
            inputPattern[lineCounter][idx] = buffer[idx];
        }
        lineCounter++;
    }
    /* Check if rows are counted */
    printf("Zeilen: %d\n", gZeilen);

    posX = STEP_RIGHT;

    /* Check for trees on the slopes and count them */
    for(int posY = STEP_DOWN; posY < gZeilen; posY += STEP_DOWN){
            if(inputPattern[posY][posX % gLineLengthMax] == '#'){
                treeCounter++;
            }
        posX += STEP_RIGHT;
    }
    printf("treecounter: %d", treeCounter);
    return 0;
}

/* Internern functions *******************************************************/

/* Opens the input.txt file and counts how many rows there are. */
static void getLineCount(void){
    FILE *file = fopen("input.txt", "r");
    char buffer[256];
    /* Prints error when e.g. file not found, file name wrong etc. */
    if(file == NULL){
        printf("ERROR: File not found!\n");
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL){
        gZeilen++;
    }
    fclose(file);
}


