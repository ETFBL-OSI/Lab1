#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include "SabiranjeDvaBroja.c"
=======
#include <math.h>
#include <stdarg.h>
>>>>>>> a82bff17b3c0c91eee81bd37f86e4d0ba5cb2a6c

int najveci_n(int n, int *niz){
    int max=niz[0];
    for(int i=1;i<n;i++) if(niz[i]>max) max=niz[i];

    return max;
}


int find_min(int n, ...) {
    va_list args;
    va_start(args, n);

    int min = va_arg(args, int);

    for (int i = 1; i < n; i++) {
        int current = va_arg(args, int);
        if (current < min) {
            min = current;
        }
    }

    va_end(args);
    return min;
}


float korijen(const float n){
    return (float)sqrt(n);
}


double procenat_broja(double broj, double procenat){
    return broj * procenat / (double)100;
}
double oduzimanje2Broja(double x, double y) {
    return x - y;
}
int sabiranje_prvih_n(int n) {
    return (n + 1) * n / 2;
}

float djeli(float a, float b)
{
    return a/b;
}


int mnozenjenbrojeva(int n){
    printf("Mnozenje n brojeva\n");
    int brojevi[n];
    int proizvod=1;
for(int i=0;i<n;i++){
    printf("Unesite %d. broj:",i);
    scanf("%d",&brojevi[i]);
}
for(int i=0;i<n;i++){
    proizvod=proizvod*brojevi[i];
}
    printf("Proizvod %d brojeva je:%d\n",n,proizvod);
return proizvod;
}
<<<<<<< HEAD

int oduzimanje_n_brojeva(int n)
{
    int razlika = 0;
    for (int i = 0; i < n; i++)
    {
        razlika -= i;
    }
    return razlika;
}
int main()
{
<<<<<<< HEAD
    int n;
    printf("Unesite n:\n");
    scanf("%d", &n);
    int razlika = oduzimanje_n_brojeva(n);
    printf("Razlika: %d", razlika);
=======
    const float n = 625;
    printf("%.1f\n", sqrt(n));
    printf("Procenat broja je: %.2lf ", procenat_broja(10,50));
=======
int main()
{


    mnozenjenbrojeva(5);

>>>>>>> 701da7720d467e0df1864b1b0f6bbf2053a46be8
    const float toSqrt = 625;
    printf("Korijen broja %.1f: %.1f\n", toSqrt, sqrt(toSqrt));
    printf("%lf\n", oduzimanje2Broja(4, 3));
<<<<<<< HEAD
    printf("%lf\n", sabiranjeDvaBroja(1.2, 2.3));
=======

    const float n = 625;
    printf("%.1f\n", sqrt(n));
    printf("Procenat broja je: %.2lf ", procenat_broja(10,50));
   // const float toSqrt = 625;
    printf("Korijen broja %.1f: %.1f\n", toSqrt, sqrt(toSqrt));
    printf("%lf\n", oduzimanje2Broja(4, 3));

>>>>>>> 7c3e1afbc5e6b74fa73b8424fdfac8d08c817384
    printf("Hello world!\n");
>>>>>>> b9824f6e5c6862d447cd6182d0367819e6beb38d
    return 0;
}
