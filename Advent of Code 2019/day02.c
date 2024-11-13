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
    int index = 0;
    char *token;
    int input[256];

    if(file == NULL)
    {
        printf("wrong input file!");
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {


        token = strtok(buffer, ",");
        
        while(token != NULL)
        {
            input[index++] = atoi(token);
            //printf("token: %s\n", token);
            token = strtok(NULL, ",");
        }
        
        

    
    }    
    
    for(int i = 0; i < 12; i++)
    {
        printf("inputArray: %d\n", input[i]);
    }
    
    switch(buffer[index]){
        case 1:
        case 2:
        case 99:
        default:
        printf("Fehler");
    }



    return 0;
}
