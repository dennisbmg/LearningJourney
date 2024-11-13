#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 100;
    int sum = 0;

    for(int i = 0; i <= num; i++){

        if(i % 5 == 0 || i % 3 == 0){
            sum += i;
        }
        
    }

    printf("sum: %d", sum);
    return 0;
}
