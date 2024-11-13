#include <stdio.h>
#include <stdlib.h>


void findMinMax(int *num1, int *num2, int *max, int *min)
{
    if(*num1 > *num2)
    {
        *max = *num1;
        *min = *num2;
    }
    else
    {
        *max = *num2;
        *min = *num1;
    }

}

int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 7;
    int max;
    int min;

    int *ptrNum1 = &num1;
    int *ptrNum2 = &num2;
    int *ptrMax = &max;
    int *ptrMin = &min;
    findMinMax(ptrNum1, ptrNum2, ptrMax, ptrMin);
    printf("Max: %d, Min: %d", max, min);

    return 0;
}
