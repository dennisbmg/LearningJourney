#include <stdio.h>

int main(int argc, char const *argv[])
{
    double distance;
    double speed;

    printf("Enter the distance (km): ");
    scanf("%lf", &distance);
    printf("\nEnter your speed (km/h): ");
    scanf("%lf", &speed);

    printf("The time you need: %lf", distance / speed);


    return 0;
}
