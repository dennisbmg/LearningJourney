#include <stdio.h>
#include <string.h>

int y[] = {1,2,3,4,5,6,1,1,1,1,11,1,1,1,1,1,1,1,1};


int myFunction(char * c, int *i, int arrLength){
    printf("last element: %x\n", c[sizeof(c)/sizeof(c[0]) - 2]);
    printf("last element: %c\n", c[strlen(c) -1 ]);
    printf("last element: %ld\n", sizeof(i[0]) ); //i[sizeof(i)/sizeof(i[0])]);
}

int main(int argc, char const *argv[])
{
    int x = 4;
    char z[] = {"Hallo"};

    printf("Size of array byte: %ld\n", sizeof(y));
    printf("Size of elements: %ld\n", sizeof(y)/sizeof(y[0]));
    printf("last element: %d\n", y[sizeof(y)/sizeof(y[0]) - 1]);
   
    myFunction(z, y,sizeof(y)/sizeof(y[0])); 
    return 0;
}
