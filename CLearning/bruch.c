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
#include <stdint.h>
/* CONSTANTS **************************************************************************************/

/* MACROS *****************************************************************************************/

/* TYPES ******************************************************************************************/
typedef struct
{
    int numerator;
    int denominator;

}Bruch;
/* PROTOTYPES *************************************************************************************/
void increment(Bruch *b);
void decremt(Bruch *b);
int addition(Bruch b1, Bruch b2);
int subtraction(Bruch b1, Bruch b2);
int multiplication(Bruch b1, Bruch b2);
int division(Bruch b1, Bruch b2);
int smaller(Bruch b1, Bruch b2);
int bigger(Bruch b1, Bruch b2);
bool equal(Bruch b1, Bruch b2);
int notEqual(Bruch b1, Bruch b2);
/* VARIABLES **************************************************************************************/
int resultNumerator = 0;
int resultDenominator = 0;
/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{

    Bruch b1;
    Bruch b2;
    b1.numerator = 3;
    b1.denominator = 4;
    
    b2.numerator = 5;
    b2.denominator = 6;

    //printf("Bruch b1 = %d/%d\n", b1.numerator, b1.denominator);
    //printf("Bruch b2 = %d/%d\n", b2.numerator, b2.denominator);

    //increment(&b1);
    //printf("Bruch b1 inrcemented = %d/%d\n", b1.numerator, b1.denominator);
    //decremt(&b2);
    //printf("Bruch b2 decremented = %d/%d\n", b2.numerator, b2.denominator);
    ////printf("Nach addition: %d/%d", resultNumerator, resultDenominator);
    //subtraction(b1, b2);
    //printf("Nach substraction: %d/%d", resultNumerator, resultDenominator);
    //multiplication(b1, b2);
    //printf("Nach Multiplikation: %d/%d", resultNumerator, resultDenominator);
    //division(b1, b2);
    //printf("Nach division: %d/%d", resultNumerator, resultDenominator);
    //smaller(b1, b2);
    //bigger(b1, b2);
    //equal(b1, b2);
    //printf("Nach substraction: %d/%d", resultNumerator, resultDenominator);
    //notEqual(b1, b2);
    //printf("Nach substraction: %d/%d", resultNumerator, resultDenominator);
    
    return 0;
}

void increment(Bruch *b)
{
    b->numerator++;
    b->denominator++;
}
void decremt(Bruch *b)
{
    b->numerator--;
    b->denominator--;
}
int addition(Bruch b1, Bruch b2)
{
    resultNumerator = 0;
    resultDenominator = 0;
    while(b2.denominator > b1.denominator)
    {
        increment(&b1);
        //printf("In der while schleife nenner von b1: %d", b1.denominator);
    }

    resultNumerator = b1.numerator + b2.numerator;
    resultDenominator = b1.denominator;

}
int subtraction(Bruch b1, Bruch b2)
{
    resultNumerator = 0;
    resultDenominator = 0;
    while(b2.denominator > b1.denominator)
    {
        increment(&b1);
        //printf("In der while schleife nenner von b1: %d", b1.denominator);
    }   
    resultNumerator = b1.numerator - b2.numerator;
    resultDenominator = b1.denominator;
}
int multiplication(Bruch b1, Bruch b2)
{
    resultNumerator = b1.numerator * b2.numerator;
    resultDenominator = b1.denominator * b2.denominator;
}
int division(Bruch b1, Bruch b2)
{
    resultNumerator = b1.numerator * b2.denominator;
    resultDenominator = b1.denominator * b2.numerator;
}
int smaller(Bruch b1, Bruch b2)
{
    if(b1.denominator > b2.denominator)
    {
        printf("Bruch: %d/%d ist kleiner!", b1.numerator, b1.denominator);
    }
    else
    {
        printf("Bruch: %d/%d ist kleiner!", b2.numerator, b2.denominator);
    }
}
int bigger(Bruch b1, Bruch b2)
{
    if(b1.denominator > b2.denominator)
    {
        printf("Bruch: %d/%d ist größer!", b2.numerator, b2.denominator);
    }
    else
    {
        printf("Bruch: %d/%d ist größer!", b1.numerator, b1.denominator);
    }
}
bool equal(Bruch b1, Bruch b2)
{
    if(b1.numerator == b2.numerator && b1.denominator == b2.denominator)
    {
        return true;
    }
    else
    {
        return false;    
    }
}
int notEqual(Bruch b1, Bruch b2)
{
        if(b1.numerator == b2.numerator && b1.denominator == b2.denominator)
    {
        return false;
    }
    else
    {
        return true;    
    }
}