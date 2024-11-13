#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num*2; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }



    return 0;
}