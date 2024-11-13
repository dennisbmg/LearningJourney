#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int getLineCount(char *file);

int main(int argc, char const *argv[])
{
    uint64_t squareFeet = 0;
    
    int zeilenCount = getLineCount("input.txt");
    printf("Zeilen: %d\n", zeilenCount);
    FILE *inputFile = fopen("input.txt", "r");
    char buffer[256];
    uint64_t sum = 0;
    int i = 1;
    int ribbon = 0;
    int ribbonSum = 0;
    int bow = 0;
    int ribbonL1;
    int ribbonL2;
    int ribbonL3;
    int ribbonMin;
    while(fgets(buffer, sizeof(buffer), inputFile) != NULL)
    {
        ribbon = 0;
        bow = 0;
        printf("****%s\n", buffer);
	    char *l = strtok(buffer,"x");
	    char *w = strtok(NULL, "x");
	    char *h = strtok(NULL, "x");
        printf("XXXXX l:%s w:%s h:%s\n", l, w, h);
        printf("Durchlauf %d",i);
        i++;
    
	    int length = atoi(l);
	    int width = atoi(w);
	    int height = atoi(h);
        int area1 = 2 * (length * width);
        int area2 = 2 * (width * height);
        int area3 = 2 * (height * length);
        int slack = 0;

        slack = 999999999;
        if (area1 < slack)
        {
            slack = area1;
        }
        if (area2 < slack)
        {
            slack = area2;
        }
        if (area3 < slack)
        {
            slack = area3;
        }
        
        slack /= 2;

        ribbonL1 = 2 * (length+height);
        ribbonL2 = 2 * (width+height);
        ribbonL3 = 2 * (length+width);
        ribbonMin = 999999;
        if(ribbonL1 < ribbonMin)
        {
            ribbonMin = ribbonL1;
        }
        if(ribbonL2 < ribbonMin)
        {
            ribbonMin = ribbonL2;
        }
        if(ribbonL3 < ribbonMin)
        {
            ribbonMin = ribbonL3;
        }
    
	    squareFeet = area1 + area2 + area3 + slack;
        ribbon = (2  * length) + (2 * width);

        bow = (length * width * height);
    
	    printf("Länge: %d Fläche 1: %d\n", length, area1);
	    printf("Breite: %d Fläche 2: %d\n", width, area2);
	    printf("Höhe: %d Fläche 3: %d\n", height, area3);
        printf("Slack: %d\n", slack);
	    printf("squareFeet: %ld\n", squareFeet);

        ribbonSum +=ribbonMin + bow;
        sum += squareFeet;
        squareFeet = 0;
        printf("Summe im Loop: %ld\n\n", sum);
    }

    printf("Summe: %ld\n", sum);
    printf("Ribbon Summe: %d\n", ribbonSum);




    fclose(inputFile);
    return 0;
}

int getLineCount(char *file){
    int zeilenCount = 0;
    FILE *inputFile = fopen(file, "r");
    char buffer[256];

    while(fgets(buffer, sizeof(buffer), inputFile) != NULL){
        zeilenCount++;
    }


    fclose(inputFile);
    return zeilenCount;
}
