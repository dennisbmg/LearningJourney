#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int num = 20;
    int space = num -1;
for(int i = 0 ; i < num; i++){
    

    for(int k = space; k >= 1; k--){
            printf(" ");
        }
   
    for(int j = 0; j <= i; j++){
            
            printf("* ");   
    }
     printf("\n");
     space--;
}



    return 0;
}