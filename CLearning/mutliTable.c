#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int num = 0;


    printf("Enter Number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("Result: %d\n", 3* i);
    }



    return 0;
}