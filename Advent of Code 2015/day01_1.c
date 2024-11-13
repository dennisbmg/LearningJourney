#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int getLineCount(char *file);

int main(int argc, char const *argv[])
{
    int zeilenCount = getLineCount("input.txt");
    printf("Zeilen: %d", zeilenCount);
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[10000];
    int floorCounter = 0;

    while(fgets(buffer, sizeof(buffer), inputFile) != NULL){
        for(int i = 1; buffer[i] != '\0'; i++){
            if(buffer[i] == '('){
                floorCounter++;
            } else if(buffer[i] == ')'){
                floorCounter--;
            }
        }
    }

    printf("Floor: %d", floorCounter);




    fclose(inputFile);
    return 0;
}

int getLineCount(char *file){
    int zeilenCount = 0;
    FILE *inputFile = fopen(file, "r");
    char buffer[10000];

    while(fgets(buffer, sizeof(buffer), inputFile) != NULL){
        zeilenCount++;
    }


    fclose(inputFile);
    return zeilenCount;
}
