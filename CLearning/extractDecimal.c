#include <stdio.h>

int main(int argc, char const *argv[])
{
    float data;
    int dataToInt;
    float decimal;

    printf("Enter float number: ");
    scanf("%f", &data);

    dataToInt = (int) data;
    decimal = data - dataToInt;

    printf("The decimal part of your Number: %f", decimal);

    return 0;
}
