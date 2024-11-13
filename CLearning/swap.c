#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 10;
    int temp;
    printf("a = %d\n" ,a);
    printf("b = %d\n" ,b);
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\n" ,a);
    printf("b = %d\n" ,b);

    return 0;
}
