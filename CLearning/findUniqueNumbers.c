#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void findUnique(int array[SIZE])
{
    int counter;
    int temp;
    printf("Unique numbers: ");
    for(int i = 0; i < SIZE-1; i++)
    {
        int uniqueFound = 0;
            if(array[i] != array[i+1])
            {
                counter++;
                printf("%d", array[i+1]);
            }

    }

    printf("\ncounter: %d", counter);
    
}


int main(int argc, char const *argv[])
{
    /*Initializing array and declare it*/
    int array[SIZE] = {5, 7, 1, 5, 2}; 




    findUnique(array);
    


}