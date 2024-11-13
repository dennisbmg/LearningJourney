#include <stdio.h>
#include <stdlib.h>




void swap(int *x, int *y)
{
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *argv[])
{
    int x = 5;
    int *pX = &x;
    int y = 3;
    int *pY = &y;

    printf("Before swap X: %d Y: %d\n", x,y );
    swap(pX,pY);
    printf("After swap X: %d Y: %d", x,y );
    return 0;
}
