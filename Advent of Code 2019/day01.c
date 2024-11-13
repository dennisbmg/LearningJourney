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
    int sum = 0;
    int temp = 0;
    int result = 0;

    if(file == NULL)
    {
        printf("wrong input file!");
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {
        temp = 0;
        temp = atoi(buffer);
        //printf("temp: %d\n", temp);
        result = temp / 3 - 2;
        //printf("result: %d\n", result);
        sum += result;

        for(int i = 0; result > 0; i++)
        {


            result = (result / 3) - 2;
            
            if(result > 0)
            {
                printf("result: %d\n", result);
                sum += result;
            }

        }
        //sum += result;
    }    

    printf("%d", sum);
    



    return 0;
}
