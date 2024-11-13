#include <stdio.h>

void myFunction(int num){
    for(int i = 1; i <= num; i++){
        printf("%d",  i);
    }
}

int main(int argc, char const *argv[])
{
    int num = 8;
    myFunction(num);
    return 0;
}