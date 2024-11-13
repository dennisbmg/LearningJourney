#include <stdio.h>
#include <stdlib.h>





int main(int argc, char const *argv[])
{
    /*Initializing array and declare it*/
    int date[3] = {1, 2, 2000}; 
    /*Initializing array*/
    int copyDate[3];

    /* copying the array*/
    // copyDate[0] = date[0];
    // copyDate[1] = date[1];
    // copyDate[2] = date[2];
    /* copying but with for loop*/
    for(int i = 0; i < 3; i++)
    {
       copyDate[i] = date[i];
    }
    
    /*print date array*/
    for(int i = 0; i < 3; i++)
    {
        printf("date[%d] = %d\n",i, date[i]);
    }
    
    /*print copied array*/
    for(int i = 0; i < 3; i++)
    {
        printf("copyDate[%d] = %d\n",i, copyDate[i]);
    }
}
