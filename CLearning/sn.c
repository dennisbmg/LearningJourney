#include <stdio.h>
/** Formula: Sn = (a1  + an) * (n/2)
 * an = n-th term
 * a1 = beginning
 * n = how many times (sprünge-> ende = a9)
 * d = difference 
*/
int main(int argc, char const *argv[])
{
    float a1, an;
    int n;
    printf("Enter the initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the last Element Value (an) in the Arithmetic Sequence: ");
    scanf("%f", &an);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    printf("The Summ of the Arithmetic Sequence = %f", (a1 + an) * n/2);
    
    return 0;
}