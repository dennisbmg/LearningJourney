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
    char *token;
    int sum = 0;
    char sign;
    int sumArray[6];
    sumArray[0] = 0;
    int idx = 1;

    if(file == NULL)
    {
        printf("wrong input file!");
    }
    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {

        sign = buffer[0];
        token = strtok(buffer, "+-");

        printf("token: %s sign: %c\n", token, sign);

        switch(sign)
        {
            case '+':
                sum += atoi(token);
                sumArray[idx] = sum;
                idx++;
                break;
            case '-':
                sum -= atoi(token);
                sumArray[idx] = sum;
                idx++;
                break;
        }
        
        printf("sum: %d", sum);
    }

    for(int i = 0; i < sizeof(sumArray)/sizeof(int); i++)
    {
        printf("sum array: %d\n", sumArray[i]);
    }
    
    for (int i = 0; i < sizeof(sumArray)/sizeof(int); i++)
    {
        for (int j = 0; j < sizeof(sumArray)/sizeof(int); j++)
        {
            if(sumArray[i] == sumArray[j])
            {
                printf("first frequenzy reached twice: %d\n", sumArray[j]);
                
            }
        }
        
    }
    



    return 0;
}
