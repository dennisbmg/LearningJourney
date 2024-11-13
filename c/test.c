#include <stdio.h>


#include <stdio.h>
#include <sys/time.h>

struct timeval tv;


int var1 = 1;
int main()
{
    gettimeofday(&tv, NULL);
unsigned long long millisecondsSinceEpoch =
    (unsigned long long)(tv.tv_sec) * 1000 +
    (unsigned long long)(tv.tv_usec) / 1000;

printf("%llu\n", millisecondsSinceEpoch);

    return 0;
}

// #include "test2.h"

// void main(void){
//     printf("blkaaa %d\n", TEST_VAR_01);
//     printf("intrnalVar: %d", getVar() );
// }

