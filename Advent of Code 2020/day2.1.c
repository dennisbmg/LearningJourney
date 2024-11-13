#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //char s[64];
    //char minChar = 0; //[64];
    //char maxChar[64];
    char reqCharInPw;         /* Char which has to be found in the password. */
    char passwordStr[64];     /* Password string.*/
    int firstPostInPw = 0;          /* Minimum number of specified character in the password. */
    int secondPosInPw = 0;          /* Maximum number of specified character in the password. */
    int countReqChar = 0;     /* Counts the occurance of required char in password. */
    int countValPw = 0;       /* Counts the valid passwords. */
    int countCharAtMinPos = 0;
    bool ruleValid = false;


    FILE *file = fopen("input.txt", "r"); // opening file in Readmode ("r")
    char buffer[256]; // buffer for each line in textfile

    if (file == NULL) {
        printf("Fehler: Datei konnte nicht geöffnet werden.\n");
        
        return 1;
    }

    while(fgets(buffer, sizeof(buffer),file) != NULL){

        sscanf(buffer, "%d-%d %c: %s", &firstPostInPw, &secondPosInPw, &reqCharInPw, passwordStr);


        /* Debug Output*/
        // printf("%d\n", minOccrInPw);
        // printf("%d\n", maxOccrInPw);
        // printf("%c\n", reqCharInPw);

        // printf("%s\n", passwordStr);
        firstPostInPw = firstPostInPw - 1;       
        secondPosInPw = secondPosInPw - 1;  



        
        /* Itterate over the password string and check if spezified positions has required char */
        for(int i = 0; passwordStr[i] != '\0'; i++){
            if(i == firstPostInPw && ruleValid == false){
                if(passwordStr[i] == reqCharInPw){
                    ruleValid = true;

                }
            } 
            
            if(i == secondPosInPw){
                if(ruleValid){
                    if(passwordStr[i] == reqCharInPw){
                        ruleValid = false;
                    }  
                }else{
                        if(passwordStr[i] == reqCharInPw){
                            ruleValid = true;
                        }
                    }
            } 

           
        }
        if(ruleValid){
            countValPw++;
        }
        printf("%s: %d\n", buffer, ruleValid);
        ruleValid = false;
        countCharAtMinPos = 0; 
    }

    printf("Valid passwords: %d", countValPw);
    fclose(file);

    return 0;
}