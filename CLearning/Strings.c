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
#include <stdbool.h>
/* CONSTANTS **************************************************************************************/

/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/

/* PROTOTYPES *************************************************************************************/
int strlength(char *string);
int numberOfWords(char *string);
bool palindromeString(char *string);
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{
    char str[] = "wagerregal";


    int strLength = strlength(str);
    int numberofwords = numberOfWords(str);    
    bool isPalindrome = palindromeString(str);

    printf("Länge des Strings: %d\n", strLength);
    printf("Anzahl Wörter im String: %d\n", numberofwords);
    printf("Ist ein palindrom: %s", isPalindrome == true ? "ja" : "nein");



    return 0;
}

int strlength(char *string)
{
    int length = 0;
    for(int idx = 0; string[idx] != '\0'; idx++)
    {
        length++;
    }


    return length;
}

int numberOfWords(char *string)
{
    int numberOfWords = 1;
    for(int idx = 0; string[idx] != '\0'; idx++)
    {
        if(string[idx] == ' ' || string[idx] == '\0')
        {
            numberOfWords++;
            //printf("String idx: %x\n", string[idx]);
        }
        //printf("String idx: %x\n", string[idx]);
    }


    return numberOfWords;
}

bool palindromeString(char *string)
{

    int numberOfWords = 1;
    bool isPalindrome = false;
    const int size = strlength(string);
    for(int outerIdx = 0; outerIdx <= size/2; outerIdx++)
    {
        for (int innerIdx = size; innerIdx >= size/2; innerIdx--)
        {
            if(string[outerIdx] == string[innerIdx])
            {
                isPalindrome = true;
                break;
            }
            else
            {
                isPalindrome = false;
                continue;
            }
        }

        if(isPalindrome == false)
        {
            break;
        } 
    }


    return isPalindrome;
}