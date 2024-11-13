#include <stdio.h>

void myFunction(int num){
    int fac = 1;
    for(int i = 1; i <= num; i++ ){
        fac *= i;
    }
    printf("Factorial of %d = %d", num, fac);
}

int main(int argc, char const *argv[])
{
    int num = 8;
    myFunction(num);
    return 0;
}