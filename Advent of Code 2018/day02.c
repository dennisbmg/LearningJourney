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
#include <stdbool.h>
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
    int doubleCount = 0;
    int tripleCount = 0;
    char alph[26];
    int alphIndex = 0;
    char *stringArray[250][26];
    int arrayIndex = 0;
   

    
    for(int buchstabe = 'a'; buchstabe <= 'z'; buchstabe++)
    {
        
        alph[alphIndex] = buchstabe;
        //printf("%d %c\n", alphIndex ,alph[alphIndex]);
        alphIndex++;
    }


    if(file == NULL)
    {
        printf("wrong input file!");
    }

    while(fgets(buffer, sizeof(buffer), file) != NULL)
    {

        strcpy(stringArray[arrayIndex],buffer);

        // bool doubleAdded = false;
        // bool tripleAdded = false;


        // for(int i = 0; i < 26; i++)
        // {
        //     int countChar = 0;

        //     for(int j = 0; buffer[j] != '\0'; j++)
        //     {
        //         if(buffer[j] == alph[i])
        //         {
        //            countChar++;
        //         }
        //     }
        //     if(countChar == 2 && doubleAdded == false)
        //     {
        //         doubleCount++;
        //         doubleAdded = true;
        //     }
        //     if(countChar == 3 && tripleAdded == false)
        //     {
        //         tripleCount++;
        //         tripleAdded = true;
        //     }
        //     //printf("found: %c %d times\n", alph[i], countChar);
        // }


        
        //printf("double count: %d", doubleCount);
        //printf("%d\n", arrayIndex);
        arrayIndex++;
    
    }
    // printf("double count: %d\n", doubleCount);
    // printf("triple count: %d", tripleCount);

    for (int i = 0; i < 250; i++) 
    {
        //printf("%d %s\n",i, stringArray[i]);
    }

    for (int  i = 0; i < 250; i++)
    {
        int lenCounter = 0;
        for (int  j = 0; j < 27; j++)
        {
            if(stringArray[i][j] == stringArray[i + 1][j])
            {
                lenCounter++;
            }
        }
        if(lenCounter == 25)
        {
            printf("%s", stringArray[i]);
        }
        //printf("lenCounter: %d\n", lenCounter);
    }
    


    return 0;
}