#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input = 0;
    printf("Enter your grade: ");
    scanf("%d", &input);

    if(input < 4){
        printf("Congratulations!!");
    } else  {
        printf("You failed....");
    }


    return 0;
}
