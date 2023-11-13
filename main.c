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

int faktorijel(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}

int main(){
}

