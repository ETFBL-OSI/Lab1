#include <stdio.h>
#include <stdlib.h>

int najveci_n(int n, int *niz){
    int max=niz[0];
    for(int i=1;i<n;i++) if(niz[i]>max) max=niz[i];

    return max;
}

int main()
{
    /*
    int niz[3];
    niz [0]=6;
    niz [1]=3;
    niz [2]=17;
    int k=najveci_n(3, niz);
    printf("%d", k);
    */

    return 0;
}
