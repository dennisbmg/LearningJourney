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

/* PROTOTYPES *************************************************************************************/

/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{

    int array[]= {2, 4, 5, 4, 3, 1, 5, 0};
    int countArray[6] = {0};
    int i;

    for(i = 0 ; i < 8; i++)
    {
        countArray[array[i]]++;
    }
 
    for(int i = 0 ; i < 6; i++)
    {
        printf("%d\n", countArray[i]);
    }



    return 0;
}
