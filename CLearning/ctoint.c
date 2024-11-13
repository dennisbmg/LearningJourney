#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    char x[] = {"1324c"};
    int firstDigit = 0;
    int lastDigit = 0;

    firstDigit = x[0];
    lastDigit = x[sizeof(x)/sizeof(x[0]) - 2];


    printf("firstDigit: %d\n", firstDigit);
    printf("lastDigit: %d\n", lastDigit);




    return 0;
}