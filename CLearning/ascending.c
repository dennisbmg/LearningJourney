#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int x[] = {1, 3, 4, 8, 9, 4};
    bool isAscending = false;

    for(int i = 0; i < sizeof(x)/sizeof(int) - 1; i++){
        if(x[i + 1] > x[i]){
            isAscending = true;
        }else{
            isAscending = false;
            break;
        }
    }
    printf("%d", isAscending);
    return 0;
}
