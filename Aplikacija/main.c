#include <stdio.h>
#include <stdlib.h>

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
}

int main()
{
    printf("Procenat broja je: %.2lf ", procenat_broja(10,50));
    printf("%lf\n", oduzimanje2Broja(4, 3));
    printf("Hello world!\n");
    return 0;
}
