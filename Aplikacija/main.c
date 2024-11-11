#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include "SabiranjeDvaBroja.c"
=======
#include <math.h>
#include <stdarg.h>
>>>>>>> a82bff17b3c0c91eee81bd37f86e4d0ba5cb2a6c

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

int main()
{
    const float n = 625;
    printf("%.1f\n", sqrt(n));
    printf("Procenat broja je: %.2lf ", procenat_broja(10,50));
    const float toSqrt = 625;
    printf("Korijen broja %.1f: %.1f\n", toSqrt, sqrt(toSqrt));
    printf("%lf\n", oduzimanje2Broja(4, 3));
    printf("%lf\n", sabiranjeDvaBroja(1.2, 2.3));
    printf("Hello world!\n");
    return 0;
}
