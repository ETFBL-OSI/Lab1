#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double oduzimanje(double broj1, double broj2)
{
    return broj1 - broj2;
}
int faktorijel(int n)
{
    int i=1, fakt=1;

    for(i;i<=n;i++)
        fakt*=i;
    return fakt;
}

int saberi(int x, int y)
{
    return x + y;
}

double korijen(int x)
{
    return sqrt(x);
}
    double stepenovanje(double a,int stepen)
    {
    return pow(a,stepen);
    }



int addnNumbers(int n)
{
    if(n < 0)
        return 0;
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
    //test

    printf("Izaberi->\n 1: sabiranje\n 2:oduzimanje\n 3:mnozenje\n 4:dijeljenje");
    int opcija;

    do
    {
        scanf("%d",&opcija);
    }while(opcija<1 || opcija>4);

    printf("Unesi dva broja->");
    double broj1, broj2;
    scanf("%d %d", &broj1, &broj2);


    switch(opcija)
    {
        case 1:
            saberi(broj1,broj2);
            break;
        case 2:
            oduzimanje(broj1,broj2);
            break;
        case 3:
            mnozenje(broj1,broj2);
            break;
        case 4:
            dijeljenje(broj1,broj2);
            break;
        default: break;

    }

    return 0;
}
