#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 7452522;
    int temp = 0;
    int oddSum = 0;
    int evenSum = 0;

    for(int i = 0; num != 0; i++){
        temp = num % 10;
        if(temp % 2 == 0){
            evenSum += temp;
        }else if(temp % 2 == 1){
            oddSum += temp;
        }
        num /= 10;
    }

    printf("oddSum: %d\n", oddSum);
    printf("evenSum: %d\n", evenSum);
    //printf("sizeof num: %ld\n", sizeof(num));
    return 0;
}
