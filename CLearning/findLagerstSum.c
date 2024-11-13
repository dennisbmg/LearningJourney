#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void sumLargest(int array[SIZE])
{
    int sum = 0;
    int temp = 0;
    for(int i = 0; i < SIZE-1; i++)
    {
        temp = array[i] + array[i+1];
        if(temp > sum)
        {
            sum = temp;
        }
        printf("TEMP: %d\n", temp);
    }

    printf("Highest sum of Neighours: %d", sum);
}


int main(int argc, char const *argv[])
{
    /*Initializing array and declare it*/
    int array[SIZE] = {5, 7, 1, 5, 2}; 


    sumLargest(array);

}