/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

uint32_t myLefData[] = {1000,
2000,
3000,
0,
4000,
0,
5000,
6000,
0,
7000,
8000,
9000,
0,
10000,
0,
50000,
0,
1000,
0,
1200,
0,
12000,
120000};

int selectArr[] = {0,0,0};


void checkNumber(uint32_t numberTocheck)
{
    uint8_t numIdx = 0;
    
    for(numIdx = 0; numIdx < 3; numIdx++ )
    {
        if( selectArr[numIdx] < numberTocheck ) 
        {
            
            if( numIdx == 0)
            {
                selectArr[2] = selectArr[1];
                selectArr[1] = selectArr[0];
                
                selectArr[0] = numberTocheck;
            }
            else if(numIdx == 1)
            {
                selectArr[1] = numberTocheck;
                selectArr[2] = selectArr[1];
                
            }
            else
            {
                selectArr[numIdx] = numberTocheck;
            }
            
            return;
        }
    }
}

int main()
{
    //printf("Hello World %ld", sizeof(myLefData)/sizeof(uint32_t));

    for(int idx = 0; idx<= sizeof(myLefData)/sizeof(int); idx++ )
    {
        
        checkNumber( myLefData[idx] );
        
        //printf("%d\n", myLefData[idx] );
    }
    
    for(int numIdx = 0; numIdx < 3; numIdx++ )
    {
        printf("%d\n", selectArr[numIdx] );
    }

    return 0;
}