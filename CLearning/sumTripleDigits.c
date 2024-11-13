#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int temp;
    printf("Enter 3 digit Numer: ");
    scanf("%d", &num);
    temp += num % 10;
    num /= 10;
    temp += num % 10;
    num /= 10;
    temp += num;


    printf("Summ of the 3 digits: %d", temp);



    return 0;
}
