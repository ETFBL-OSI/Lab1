#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float korijen(const float n){
    return (float)sqrt(n);
}

    double oduzimanje2Broja(double x, double y) {
    return x - y;
}

int sabiranje_prvih_n(int n) {
    return (n + 1) * n / 2;
}

int main()
{
    const float toSqrt = 625;
    printf("Korijen broja %.1f: %.1f\n", toSqrt, sqrt(toSqrt));
    printf("%lf\n", oduzimanje2Broja(4, 3));
    printf("Hello world!\n");
    return 0;
}
