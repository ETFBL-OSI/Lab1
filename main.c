#include <stdio.h>

float  SrednjaVrijednost(float* niz, int n)
{
    if(n<0)
    {
       float suma;
       for( int i=0; i<n ; i++)
         suma+=niz[i];
       float sv=suma/n;
    }
    return sv;
}
