#include <stdio.h>
int main(int argc, char const *argv[])
{
    int grade1 = 3, grade2 = 5, grade3 = 5.6;

    printf("Your average grade = %lf", ((double) grade1 + grade2 + grade3) / 3); // casting one int to double is enough to get exact Number
    printf("Your average grade = %lf", ((double) grade1 + grade2 + grade3) / 3.0);
    return 0;
}
