#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float korijen(float n){
    return (float)sqrt(n);
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

double procenat_broja(double broj, double procenat){
    return broj * procenat / (double)100;

double oduzimanje2Broja(double x, double y) {
    return x - y;
}

int sabiranje_prvih_n(int n) {
    return (n + 1) * n / 2;
}

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
    const float toSqrt = 625;
    printf("Korijen broja %.1f: %.1f\n", toSqrt, sqrt(toSqrt));
    printf("%lf\n", oduzimanje2Broja(4, 3));
    printf("Hello world!\n");
>>>>>>> b9824f6e5c6862d447cd6182d0367819e6beb38d
    return 0;
}
