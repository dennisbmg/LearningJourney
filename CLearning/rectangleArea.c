#include <stdio.h>
int main(int argc, char const *argv[])
{
    double laenge;
    double breite;

    printf("länge: ");
    scanf("%lf", &laenge);
    printf("breite: ");
    scanf("%lf", &breite);

    printf("Fläche des rechtecks: %.2lf", laenge * breite);


    return 0;
}
