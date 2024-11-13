#include <stdio.h>
/** Formula: an = a1  + (n - 1) * d 
 * an = n-th term
 * a1 = beginning
 * n = how many times (sprünge-> ende = a9)
 * d = difference 
*/
int main(int argc, char const *argv[])
{
    float a1, d;
    int n;
    printf("Enter the initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the difference in the Arithmetic Sequence: ");
    scanf("%f", &d);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    printf("The n-th term of the Arithmetic Sequence = %f", a1 + (n-1) *d);
    
    return 0;
}
