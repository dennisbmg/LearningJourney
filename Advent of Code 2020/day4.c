/***************************************************************************************************
  (c) NewTec GmbH System-Entwicklung und Beratung 2015   -   www.newtec.de
  $URL: $
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
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* CONSTANTS **************************************************************************************/

/* MACROS *****************************************************************************************/
#define VALID_COUNT 7
/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/
static void getLineCount(void);
/* VARIABLES **************************************************************************************/
uint32_t gZeilen = 0;

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{
  getLineCount();
  int foundCounter = 0;
  int validCounter = 0;
  int passValid = false;

//   char keyValues[7][3] = {
//     {'b', 'y', 'r'},
//     {'i', 'y', 'r'},
//     {'e', 'y', 'r'},
//     {'h', 'g', 't'},
//     {'h', 'c', 'l'},
//     {'e', 'c', 'l'},test
//     {'p', 'i', 'd'}
//  };

 char keyValues[7][4] = {"byr", "iyr", "eyr","hgt", "hcl", "ecl", "pid"};

  FILE *file = fopen("input.txt", "r");
  char buffer[256];
  uint16_t arrayIdxcounter = 0;
  char fileInput[gZeilen];
  uint16_t pasportNumber = 1;

  uint8_t strLoop = 0;
  uint8_t keyIdx = 0;
  if(file == NULL){
        printf("ERROR: File not found!\n");
  }

  /* while file has not reached end we go through every line*/
  while(fgets(buffer, sizeof(buffer),file) != NULL)
  {
    
    int lineLength = strlen(buffer);


    if(lineLength > 1)
    {
      /* remove '\n' at the line end */
      buffer[ lineLength-1 ] = '\0';

      /* Split buffer at " " */
      char * token = strtok(buffer, " ");
      while( token != NULL )
      {
        
        for( keyIdx = 0; keyIdx < 7; keyIdx++ )
        {
            if( (token[0] == keyValues[keyIdx][0]) && 
                (token[1] == keyValues[keyIdx][1]) && 
                (token[2] == keyValues[keyIdx][2]) )
            {
                //printf("%s Found\n", keyValues[keyIdx]);
                foundCounter++;
                break;
            }
        }
        
        if(foundCounter == VALID_COUNT){
          validCounter++;
          foundCounter = 0;
        }
        //printf("%s\n", token);
      
        // Move to the next token
        token = strtok(NULL, " ");
      }


      

    }
    else
    {
      /* new line */
      pasportNumber++;
      //printf("\nPP: %d\n",pasportNumber);
    }


    
    
    if( feof(file) )
    {
      break;
    }

  }
 printf("%d", validCounter);
    return 0;
}



/* Opens the input.txt file and counts how many rows there are. */
static void getLineCount(void){
    FILE *file = fopen("input.txt", "r");
    char buffer[256];
    /* Prints error when e.g. file not found, file name wrong etc. */
    if(file == NULL){
        printf("ERROR: File not found!\n");
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL){
      // if(!isspace((unsigned char)*buffer)){
      //   gZeilen++;
      // }
        gZeilen++;
    }
    printf("Zeilen: %d\n", gZeilen);
    fclose(file);
}

