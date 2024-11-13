#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    /** Öffnet die datei im lesemodus ("r") */
    FILE *file = fopen("input.txt", "r");

    
    
    char *buffer = NULL;
    char *endptr;
    size_t size = 0;
    int counterElv = 0;
    int num;
    int tmpC;
    int tmpE;

    while(getline(&buffer, &size, file) != -1)
    {
        buffer[-1] = '\0';
        //num = atoi(buffer);
        tmpE = strlen(buffer);
        printf("%d\n", tmpE);
        // tmpC += num;
        // printf("%d", tmpC);
         if(*buffer == '\r'){ //13 0x0D
             printf("Neuer Elf");
         }
        


    }

    // for(int i = 0; i < sizeof(buffer); i++){
    //     for(int j = 0; j < ?? ; j++){

    //     }
    // }



    return 0;
}
