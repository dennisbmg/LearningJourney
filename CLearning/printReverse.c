#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 531;
    int temp;
    for(int i= 0; i < sizeof(num) -1; i++){
        temp = num % 10;
        printf("%d", temp);
        num /= 10;
    }



    return 0;
}
