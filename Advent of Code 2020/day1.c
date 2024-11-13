#include <stdio.h>
#include <stdlib.h>


const int gSum = 2020;
int gZeilen = 0;

// void checkSum(numberToCheck){
    

// }


int main(int argc, char const *argv[])
{

    FILE *file2 = fopen("input.txt", "r"); // opening file in Readmode ("r")
    
    char buffer2[256]; // buffer for each line in textfile

    if (file2 == NULL) {
        printf("Fehler: Datei konnte nicht geöffnet werden.\n");
        
        return 1;
    }

    while(fgets(buffer2, sizeof(buffer2),file2) != NULL){
        //printf("%02X\n", buffer2[0]);
        //if(buffer2[0] != '\n' && buffer2[0] != '\r'){
            //printf("rrr%02X %d %d\n", buffer2[0], (buffer2[0] =='\r') , (buffer2[0] =='\n'));
            gZeilen++;
        //}
    }
    printf("Zeilen: %d\n", gZeilen);

    fclose(file2);


    FILE *file = fopen("input.txt", "r"); // opening file in Readmode ("r")
    char buffer[256]; // buffer for each line in textfile

        if (file == NULL) {
        printf("Fehler: Datei konnte nicht geöffnet werden.\n");
        
        return 1;
    }
    
    int numberToCheck = 0;
    int number = 0;
    int array[gZeilen];
    int counter = 0;
    int answer = 0;

   




    while(fgets(buffer, sizeof(buffer),file) != NULL){
        number = atoi(buffer);
        array[counter] = number;
        counter++;
        //printf("number: %d\n", number);

    }
    
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        //printf("%d\n", array[i]);
    }
    
    
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){

        for(int j = 0; j < sizeof(array)/sizeof(array[0]); j++){
            // if(array[i] + array[j] == gSum){
            //     answer = array[i] * array[j];
            //     printf("Answer: %d\n", answer);  
            // }
            for(int k = 0; k < sizeof(array)/sizeof(array[0]); k++){
                if(array[i] + array[j] + array[k] == gSum){
                    answer = array[i] * array[j] * array[k];
                    printf("Answer: %d\n", answer);  
                }
            }
         
        }
    	 
    }

    fclose(file);

    return 0;
}
