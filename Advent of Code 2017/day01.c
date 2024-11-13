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

int firstDigit;
/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/
int main(int argc, char const *argv[])
{
    FILE *file = fopen("input.txt", "r");
    char buffer[10000];
    int priv;
    int next;
    int sum = 0;
    char *inputString;
    int length;
    while(fgets(buffer, sizeof(buffer), file) != NULL){
        inputString = buffer;
    }
    fclose(file);
    length = strlen(inputString);
    if (inputString[length - 1] == '\n') {
        inputString[length - 1] = '\0';
            length--;
    }
    for(int i = 0; inputString[i] != '\0'; i++){
         priv = inputString[i] - '0';
         next = inputString[(i + (length/2)) % length] - '0';
         
         if(priv == next){
            sum += priv;
         }

    }


    printf("%s\n", inputString);
    printf("Summe: %d", sum);
    return 0;
}
