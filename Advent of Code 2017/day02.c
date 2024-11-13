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
/* CONSTANTS **************************************************************************************/
#define COL 16
#define ROW 16
/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/

/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/
int main(int argc, char const *argv[])
{
    FILE *file = fopen("input.txt", "r");
    char buffer[256];
    int matrix[ROW][COL];
    int i = 0, j = 0;
    char *token;
    int matrix2[256];
    int max;
    int min;
    int temp = 0;
    int sum = 0;
    int division_result = 0;
     int found = 0;


    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {
        token = strtok(buffer, "	");
        //printf("%s\n", buffer);
        i = 0;
         while(token != NULL)
         {
            matrix[j][i] = atoi(token);
            printf("Token i%d j%d: %s\n", i, j, token);
            // matrix2[i] = atoi(token);
            token = strtok(NULL, "	");
            i++;
         }
        
        j++;
    }
    fclose(file);

    /* Iterrate over every row*/
    for(int idx = 0; idx < ROW; idx++)
    {
        temp = 0;
        found = 0;
        /* iterrate over every COL in the row */
        for(int jdx = 0; jdx < COL; jdx++)
        {
            /* Check for pair*/
            for(int kdx = 0; kdx < COL;kdx++)
            {
                if (jdx != kdx && matrix[idx][jdx] % matrix[idx][kdx] == 0)
                {
                    division_result = matrix[idx][jdx] / matrix[idx][kdx];
                    sum += division_result;

                }
            } 
        }
    }
    
    printf("temp after loops: %d", temp);


    

    printf("Token summ: %d\n", sum);
    
    return 0;
}
