/* INCLUDES ***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>

/* CONSTANTS **************************************************************************************/

#define UP '^'
#define DOWN 'v'
#define RIGHT '>'
#define LEFT '<'
#define X 1035
#define Y 1046

/* PROTOTYPES *************************************************************************************/

int getLineCount(char *file);
int checkHouseAndCount(char direction, int *x,int  *y);

/* VARIABLES **************************************************************************************/

int newHouseCounter = 0;
char currLocation;
char prevLocation;
int length;
bool coord[2070][2092] = {false};
int startX = X;
int startY = Y;
int startRoboX =  X;
int startRoboY = Y;



/* INTERNAL FUNCTIONS *****************************************************************************/

int main(int argc, char const *argv[])
{
    int zeilenCount = getLineCount("input.txt");
    printf("Zeilen: %d\n", zeilenCount);
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[10000];
    char *inputString;
    int length;
    int leftCounter;
    int rightCounter;
    int upCounter;
    int downCounter;


    while(fgets(buffer, sizeof(buffer), inputFile) != NULL)
    {
        inputString = buffer;
    }
    fclose(inputFile);
    length = strlen(inputString);
    printf("inputString länge: %d\n", length);
    // for(int i = 0; inputString[i] != '\0'; i++)
    // {
    //     if(inputString[i] == UP)
    //     {
    //         upCounter++;
    //     }
    //     if(inputString[i] == DOWN)
    //     {
    //         downCounter++;
    //     }
    //     if(inputString[i] == RIGHT)
    //     {
    //         rightCounter++;
    //     }
    //     if(inputString[i] == LEFT)
    //     {
    //         leftCounter++;
    //     }

    // }


    //printf("UP: %d\nDOWN: %d\nRIGHT: %d\nLEFT: %d\n", upCounter,downCounter, rightCounter, leftCounter);

    /* sets the starting counter and checks every Character with a function */
    for (int i = 0; inputString[i] != '\0'; i+=2)
    {
        if(coord[startX][startY] == false)
        {
            coord[startX][startY] = true;
            newHouseCounter++;
        }

        checkHouseAndCount(inputString[i], &startX, &startY); 
        checkHouseAndCount(inputString[i+1], &startRoboX, &startRoboY); 
    }
    
    printf("Häuser: %d", newHouseCounter);
    return 0;
}
/* Opens the input file and counts the lines */
int getLineCount(char *file)
{
    int zeilenCount = 0;
    FILE *inputFile = fopen(file, "r");
    char buffer[10000];

    while(fgets(buffer, sizeof(buffer), inputFile) != NULL){
        zeilenCount++;
    }


    fclose(inputFile);
    return zeilenCount;
}

int checkHouseAndCount(char direction, int *x, int *y)
{
    
    switch(direction){
        case UP: 
            *x-=1;
            if(coord[*x][*y] == false)
            {
                coord[*x][*y] = true;
                newHouseCounter++;
            }
        break;

        case DOWN: 
           *x+=1;
            if(coord[*x][*y] == false)
            {
                coord[*x][*y] = true;
                newHouseCounter++;
            }
        break;

        case LEFT: 
            *y-=1;
            if(coord[*x][*y] == false)
            {
                coord[*x][*y] = true;
                newHouseCounter++;
            }        
        break;

        case RIGHT: 
            *y+=1;
            if(coord[*x][*y] == false)
            {
                coord[*x][*y] = true;
                newHouseCounter++;
            }        
        break;
    }
}