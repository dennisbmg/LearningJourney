#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double input = 0;

    printf("Enter number: ");
    scanf("%lf", &input),

    printf("Your Number %lf to the power of 2: %lf\n", input, pow(input, 2));
    printf("Your Number %lf to the power of 2: %lf\n", input, pow(input, 4));
    printf("Your Number %lf to the power of 2: %lf\n", input, pow(input, 6));
    printf("Your Number %lf to the power of 2: %lf\n", input, pow(input, 8));
    return 0;
}
