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
typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct 
{
    int math;
    int physics;
    int english;
} Grades;
/* PROTOTYPES *************************************************************************************/
void findNextDay(Date date);
/* VARIABLES **************************************************************************************/

/* EXTERNAL FUNCTIONS *****************************************************************************/

/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{

    Date myDate;

    myDate.day = 31;
    myDate.month = 12;
    myDate.year = 2001;
 
    //printf("Day: %d\n", myDate.day);
    //printf("Month: %d\n", myDate.month);
    //printf("Year: %d\n", myDate.year);
    //
    //Grades myGrade;
    //myGrade.english = 1;
    //myGrade.physics = 4;
    //myGrade.math = 2;

    //printf("English: %d\n", myGrade.english);
    //printf("Math: %d\n", myGrade.math);
    //printf("Physics: %d\n", myGrade.physics);

    findNextDay(myDate);


    return 0;
}

void findNextDay(Date date)
{
    bool isLeapYear = false;
    int maxDays = 0;

    if((date.year % 4 == 0 && date.year % 100 != 0)
    || (date.year % 4 == 0 && date.year % 400 == 0) )
    {
        printf("Its a leapyear!: %d\n", date.year);
        isLeapYear = true;
    }
    else
    {
        printf("Not a Leapyear");    
        isLeapYear = false;  
    }

    printf("Leapyear before switch: %d\n", isLeapYear);
    switch(date.month)
    {
        case 1:
            maxDays = 31;
            break;
        case 2:
            if(isLeapYear == true)
            {
                maxDays = 29;
                printf("Max day: %d\n", maxDays);
                break;
            }
            
            else if(isLeapYear == false)
            {
                maxDays = 28;
                printf("Max day: %d\n", maxDays);
            }
            break;
        case 3:
            maxDays = 31;
            break;
        case 4:
            maxDays = 30;
            break;
        case 5:
            maxDays = 31;
            break;
        case 6:
            maxDays = 30;
            break;
        case 7:
            maxDays = 31;
            break;
        case 8:
            maxDays = 31;
            break;
        case 9:
            maxDays = 30;
            break;
        case 10:
            maxDays = 31;
            break;
        case 11:
            maxDays = 30;
            break;
        case 12:
            maxDays = 31;
            break;
    }

    if(date.day > maxDays - 1)
    {
        date.day = 1;
        date.month++;
        if(isLeapYear == true && date.month == 2)
        {

            maxDays = 29;
            printf("Max Day after: %d", maxDays);
        }
        if(date.month > 12)
        {
            date.month = 1;
            date.year++;
        }
    }
    else
    {
        date.day++;
    }
    printf("Next day is %d.%d.%d", date.day, date.month, date.year);

}