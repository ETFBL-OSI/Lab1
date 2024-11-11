#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float korijen(float n){
    return (float)sqrt(n);
}




    double oduzimanje2Broja(double x, double y) {
    return x - y;
}

int sabiranje_prvih_n(int n) {
    return (n + 1) * n / 2;
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
int main()
{

    mnozenjenbrojeva(5);

    const float toSqrt = 625;
    printf("Korijen broja %.1f: %.1f\n", toSqrt, sqrt(toSqrt));
    printf("%lf\n", oduzimanje2Broja(4, 3));

    printf("Hello world!\n");
    return 0;
}
