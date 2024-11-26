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
int sumUpToNum(int n);
int factorial(int n);
int fibonacci(int n);
int sumOfDigits(int n);
int countDigits(int n);
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{
    int n = 2133; 

 
    //int sum = sumUpToNum(n);
    //printf("Sum up to n = %d: %d\n", n, sum);
    //int sum2 = factorial(n);
    //printf("factorial n = %d: %d\n", n, sum2);
    //int sum3 = fibonacci(n);
    //printf("fibonacci n = %d: %d\n", n, sum3);
    int sum4 = sumOfDigits(n);
    printf("sum of digit n = %d: %d\n", n, sum4);
    int sum5 = countDigits(n);
    printf("sum of digit n = %d: %d\n", n, sum5);


    return 0;
}

int sumUpToNum(int n)
{   
    printf("%d\n", n);
    if(n == 1)
    {
        return 1;
    }
    

    return n + sumUpToNum(n - 1);
}

int factorial(int n)
{
    printf("%d\n", n);
    if(n == 1)
    {
        return 1;
    }
    

    return n * factorial(n - 1);
}

int fibonacci(int n)
{
    printf("%d\n", n);
    if(n == 0)
    {
        return 0;
    }
        if(n == 1)
    {
        return 1;
    }
    

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumOfDigits(int n)
{

    printf("%d\n", n);
    if(n < 10)
    {
        return n;
    }

    

    return n % 10 + sumOfDigits(n / 10);

}

int countDigits(int n)
{

    printf("%d\n", n);
    if(n < 10)
    {
        return 1;
    }

    

    return n % 10 + sumOfDigits(n / 10);

}
