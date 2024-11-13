
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //char s[64];
    //char minChar = 0; //[64];
    //char maxChar[64];
    char reqCharInPw;         /* Char which has to be found in the password. */
    char *passwordStr = NULL; /* Password string.*/
    int minOccrInPw;          /* Minimum number of specified character in the password. */
    int maxOccrInPw;          /* Maximum number of specified character in the password. */
    int countReqChar = 0;     /* Counts the occurance of required char in password. */
    int countValPw = 0;       /* Counts the valid passwords. */

    FILE *file = fopen("input.txt", "r"); // opening file in Readmode ("r")
    char buffer[256]; // buffer for each line in textfile

    if (file == NULL) {
        printf("Fehler: Datei konnte nicht geöffnet werden.\n");
        
        return 1;
    }

    while(fgets(buffer, sizeof(buffer),file) != NULL){

        /* Get min and max number of req char in password. */
        /* conversion ASCII to int e.g. '2' = 0x32 = 0b0011 0010 -> (0x32 & 0b0000 1111) = 0b0000 0010 */
        minOccrInPw = (buffer[0] & 0x0F); 
        maxOccrInPw = (buffer[2] & 0x0F);

        //strncpy(minChar, buffer, 1);
        //strncpy(maxChar, (buffer + 2), 1);
        //minOccrInpasswordStr = atoi(minChar);
        //maxOccrInPw = atoi(maxChar);

        /* Get required character for password string */
        reqCharInPw = buffer[4];
        //strncpy(c, buffer + 4, 1);
        //strncpy(passwordStr, &buffer[7], maxOccrInPw);

        /* get Password string*/
        passwordStr = &buffer[7];

        /* Debug Output*/
        printf("%d\n", minOccrInPw);
        printf("%d\n", maxOccrInPw);
        printf("%c\n", reqCharInPw);

        printf("%s\n", passwordStr);

        for(int i = 0; i < sizeof(passwordStr)/sizeof(passwordStr[0]); i++){
            if(passwordStr[i] == reqCharInPw){
                countReqChar++;
            }


        }
        
        if(countReqChar >= minOccrInPw && countReqChar <= maxOccrInPw){
            countValPw++;
        }
        countReqChar = 0;

    }

    printf("Valid passwords: %d", countValPw);


    

    

    
    


    return 0;
}