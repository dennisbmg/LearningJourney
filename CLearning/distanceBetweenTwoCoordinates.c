#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    double x1 = 1, x2 = 4, y1 = 3, y2 = 7;
    double distance = 0;
    distance = sqrt( pow(x1 -x2,2)+ pow(y1 -y2,2));
    
    printf("distance: %lf", distance);


    return 0;
}
