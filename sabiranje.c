#include <stdio.h>
#include <stdlib.h>


int sabiranje()
{
    int a,b;
    printf("Unesi prvi broj: "); scanf("%d", &a);
    printf("Unesi drugi broj: "); scanf("%d", &b);
    int rez=0;
    rez=a+b;
    printf("Rezultat je %d", rez);
}

