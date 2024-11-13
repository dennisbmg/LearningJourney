#include <stdio.h>

/** Celsius to Fahrenheit formula ->  Temp (F) = Temp (C) * 1.8 + 32 
 *  Fahrenheit to Celsius formula ->  Temp (C) = (Temp (F) -32) / 1.8
*/


int main(int argc, char const *argv[])
{
    double celsius;
    double fahrenheit;

    while(1){
        printf("\nEnter fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = (fahrenheit - 32) / 1.8;
        printf("\nCelsius = %.2lf\n", celsius);
    }
    return 0;
}