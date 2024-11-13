#include <stdio.h>

/** Celsius to Fahrenheit formula ->  Temp (F) = Temp (C) * 1.8 + 32 
 *  Fahrenheit to Celsius formula ->  Temp (C) = (Temp (F) -32) / 1.8
*/


int main(int argc, char const *argv[])
{
    double celsius;
    double fahrenheit;

    while(1){
        printf("\nEnter celcius: ");
        scanf("%lf", &celsius);
        fahrenheit = celsius * 1.8 + 32;
        printf("\nFahrenheit = %.2lf\n", fahrenheit);
    }
    return 0;
}
