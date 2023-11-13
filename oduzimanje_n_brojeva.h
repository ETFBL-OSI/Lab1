#ifndef ODUZIMANJE_N_BROJEVA_H_INCLUDED
#define ODUZIMANJE_N_BROJEVA_H_INCLUDED

#include<stdio.h>

double oduzimanje_n_brojeva(double broj,double *niz,int n)
{
    for(int i=0;i<n;i++)
        broj-=niz[i];
    return broj;
}


#endif // ODUZIMANJE_N_BROJEVA_H_INCLUDED
