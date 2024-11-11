#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float korijen(float n){
    return (float)sqrt(n);
}

int main()
{
    const float n = 625;
    printf("%.1f\n", sqrt(n));
    printf("Hello world!\n");
    return 0;
}
