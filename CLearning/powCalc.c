#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int pow = 0;
    int counter = 0;
    int result = 1;

    printf("Enter Number: ");
    scanf("%d", &num);
    printf("\nEnter power: ");
    scanf("%d", &pow);
    pow -= 1;
    while(counter <= pow){
        result *= num;
        
       
        counter++;
    }
    printf("%d\n", result);
    return 0;
}