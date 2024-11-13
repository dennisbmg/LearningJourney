#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void bubbleSort(int array[SIZE])
{
    int temp = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        
    }
    
}


int main(int argc, char const *argv[])
{
    /*Initializing array and declare it*/
    int array[SIZE] = {5, 7, 1, 5, 2}; 


    printf("Unsorted:");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

    bubbleSort(array);

    printf("\n");
    printf("Sorted:");
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }

}