#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
double procenat_broja(double broj, double procenat){
    return broj * procenat / (double)100;
=======
<<<<<<< HEAD
    double oduzimanje2Broja(double x, double y) {
    return x - y;
}
=======
int sabiranje_prvih_n(int n) {
    return (n + 1) * n / 2;
>>>>>>> 334fe60c2cc9c9a76eb25df6b7cf054fd19f6596
>>>>>>> 87b2214c4f576422e455c6f973e7c218e021c556
}

double procenat_broja(double broj, double procenat){
    return broj * procenat / (double)100;
}

int main()
{
    printf("Procenat broja je: %.2lf ", procenat_broja(10,50));
    return 0;
}
