#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dva_drugara_dobra_stara_oduzimaju(double broj1, double broj2)
{
    return broj1 - broj2;
}

int saberi(int x, int y)
{
    return x + y;
}

double korijen(int x)
{
    return sqrt(x);
}

int addnNumbers(unsigned int n)
{

    int rez = 0;
    int i;
    for(i = 0; i < n; i++)
    {
        int temp;
        printf("%d: ", i+1);
        scanf("%d", &temp);
        rez += temp;
    }

    return rez;
}

int main()
{
    return 0;
}
