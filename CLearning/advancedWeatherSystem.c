#include <stdio.h>
#define SIZE 7

int main(int argc, char const *argv[])
{
        float temps[SIZE];
        float sum = 0;
        float average_temp = 0;
        float max_temp = 0;

        for(int i = 0; i < SIZE; i++){
            printf("Enter day %d: ", i+1);
            scanf("%f", &temps[i]);
            sum += temps[i];
            if(temps[i] > max_temp){
                max_temp = temps[i];
            }
        }
        
        average_temp = sum / SIZE;


        printf("The Average Temp is: %.2fC°\n", average_temp);        
        printf("On the hottest day it was: %.2fC°\n", max_temp);

    return 0;
}
