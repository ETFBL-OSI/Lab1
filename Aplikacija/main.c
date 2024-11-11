#include <stdio.h>
#include <stdlib.h>

double procenat_broja(double broj, double procenat){
    return broj * procenat / (double)100;
}

int main()
{
    printf("Procenat broja je: %.2lf ", procenat_broja(10,50));
    return 0;
}
