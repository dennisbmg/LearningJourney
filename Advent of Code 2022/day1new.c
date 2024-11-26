#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    FILE *file = fopen("input.txt", "r"); // opening file in Readmode ("r")
    char buffer[256]; // buffer for each line in textfile

    int sumCalories = 0;
    int elvCounter = 0;
    int curElfCalories = 0;
    int tempHighest = 0;
    int elvOne = 0, elvTwo = 0, elvThree = 0;
    int topElves[3]= {0};
    int sumTopThree;
    
    int arrayOfSums[60];
    int counter = 0;
    


    /* While end of file ist NOT reached */
    while(fgets(buffer, sizeof(buffer),file) != NULL){
        //printf("%s", buffer);
        sumCalories += atoi(buffer);
        if(buffer[0] == '\r')
        {
            //printf("new efl\n");
            if(tempHighest < sumCalories)
            {
                tempHighest = sumCalories;
            }
            
            if(topElves[0] < sumCalories)
            {
                    topElves[2] = topElves[1];
                    topElves[1] = topElves[0];
                    topElves[0] = sumCalories;
            }  
            else if(topElves[1] < sumCalories)
            {
                    topElves[2] = topElves[1];
                    topElves[1] = sumCalories;

            }   
            else if(topElves[2] < sumCalories)
            {
                    topElves[2] = sumCalories;
            }    

        

        sumCalories = 0;
        }
        
    }    
    for(int i = 0; i < 3; i++)
    {
        printf("***%d", topElves[i]);
    }

printf("Highest sum: %d\n", tempHighest);        
printf("Top 3 elves sum: %d\n", topElves[0] + topElves[1] + topElves[2]);
    return 0;
}
