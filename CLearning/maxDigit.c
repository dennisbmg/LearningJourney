#include <stdio.h>

void myFunction(int num){
    int temp;
    temp = num % 10;
    num /= 10;

    if(temp > num){
        printf("Max digit is: %d", temp);
    }else{
        printf("Max digit is: %d", num);
    }
}

int main(int argc, char const *argv[])
{
    int num = 44;
    myFunction(num);
    return 0;
}