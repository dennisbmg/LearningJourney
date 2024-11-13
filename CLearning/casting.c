#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1 = 5, num2 = 2;
    double result;
    result = (double) num1 / num2; // only num1 is casted to double num2 stays an integer. Result is still the expected 2.5 
                                   // only 1 part of the equation has to be a double  



    printf("result = %.2lf", result);

    return 0;
}
