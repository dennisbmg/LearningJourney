#include <stdio.h>
#include <stdlib.h>

/** Test data for BubbleSort */
int gArray[] = {8,7,4,3,9,5};

/** size of the Arry for the Bobblesort */
int size = sizeof(gArray)/ sizeof(gArray[0]);

/** BubbleSort to sort an gArray */
void sort(int gArray[],int  size){

    int tempVar = 0; /* temporary varibe to sort the values between arry indeciess */

    /* 1st loop of the whole array -> to */
    for (int i = 0; i < size-1; i++) // size -1 because we start at 0
    {
        //bool sortFinisch = true;
        /* 2nd loop of the whole array -> to perfor a sort of 2 adjacent elements */
        for (int j = 0; j < size-1; j++) // size -1 because we start at 0
        {
            /* excahnge adjacent array elements if the lower elemet is less than the one abowe */
           if(gArray[j] > gArray[j+1])
           {
                //sortFinisch = false;
                tempVar = gArray[j];        // save left element if it is bigger than right element
                gArray[j] = gArray[j+1];  // put right element into left element 
                gArray[j+1] = tempVar;      // put saved left element into right element 
           } 
           
        //    if(sortFinisch == true)
        //    {
        //     break;
        //    }
        }
    } 
}
/** Print the sorted Array */

void printArray(int array[], int size){

    for (int i = 0; i < size; i++)  // iterrate over array to print every element
    {
        printf("%d\n", array[i]);
    }
}

/**  */
int ghggfhg = 55;

int bnalss = 55; /**< gvdhgfzgzft */
/**
 * brief jhfuzfuzfuzu
 * 
 */
int main(int argc, char const *argv[])
{   
    FILE *file = fopen("input.txt", "r"); // opening file in Readmode ("r")
    char buffer[256]; // buffer for each line in textfile

    int sumCalories = 0;
    int elvCounter = 0;
    int curElfCalories = 0;
    int tempHighest = 0;
    int elvOne = 0, elvTwo = 0, elvThree = 0;
    int topElves[3]= {elvOne, elvTwo, elvThree};
    int sumTopThree;
    
    int arrayOfSums[60];
    int counter = 0;
    


    /* While end of file ist NOT reached */
    while(fgets(buffer, sizeof(buffer),file) != NULL){
        
        /* additon of calories until emptyline  */
        sumCalories += atoi(buffer);
        arrayOfSums[counter] = atoi(buffer);
        counter++;
        
        if (buffer[0] == '\r') {


            if(sumCalories > tempHighest){
                tempHighest = sumCalories;
            }
            sumCalories = 0;
        }
        if (sumCalories > tempHighest) {
            tempHighest = sumCalories;
        }

        // for(int index = 0; index < 3; index++){
        //     if(tempHighest > topElves[index] && topElves[index] != topElves[(index + 1) % 2]){
        //         topElves[index] = tempHighest;
        //     }
        //     // printf("%d\n", topElves[index]);
        // }
    }    

    
    printArray(arrayOfSums, 2000);
    //printf("%d\n", tempHighest);
    //printf("%d\n", sumTopThree);
    // printf("Highest: %d\n", tempHighest);
    // printf("Index 0: %d\n", topElves[0]);
    // printf("Index 1: %d\n", topElves[1]);
    // printf("Index 2: %d\n", topElves[2]);
    return 0;
}
