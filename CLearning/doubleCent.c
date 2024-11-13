#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    double cent = 0.01;
    for(int i = 1; i <=30; i++){
        printf("Day: %d Your money: %.2lf€\n", i, cent);
        cent*=2;
        
    }
}