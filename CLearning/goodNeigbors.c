#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char const *argv[])
{
    int array[] = {2,6,3,4,4,4,5,6,4,20,5};

    for(int i = 1; i < sizeof(array)/sizeof(array[0]); i++){
        if(array[i-1]* array[i + 1] == array[i]){
            printf("good neighbor found!\n");
        }
    }


    return 0;
}
