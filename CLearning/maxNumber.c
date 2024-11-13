#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[5] = {4,5,15,13,12};
    int tempMax = 0;
    int maxIndex = 0;

    for(int i = 0; i < sizeof(numbers)/ sizeof(numbers[0]);i++){
        if(numbers[i] > tempMax){
            tempMax = numbers[i];
            maxIndex = i;
        }

    }

printf("max number: %d\n", tempMax);
printf("max index: %d\n", maxIndex);

    return 0;
}
