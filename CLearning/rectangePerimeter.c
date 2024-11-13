#include <stdio.h>
int main(int argc, char const *argv[])
{
    double laenge;
    double breite;

    printf("länge: ");
    scanf("%lf", &laenge);
    printf("breite: ");
    scanf("%lf", &breite);

    printf("Umfang des rechtecks: %.2lf", (laenge * 2 ) + (breite * 2 ));
    


    return 0;
}