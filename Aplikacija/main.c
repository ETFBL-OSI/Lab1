#include <stdio.h>
#include <stdlib.h>

int mnozenjenbrojeva(int n){
    int brojevi[n];
    int proizvod=1;
for(int i=0;i<n;i++){
    printf("Unesite %d. broj:",i);
    scanf("%d",&brojevi[i]);
}
for(int i=0;i<n;i++){
    proizvod=proizvod*brojevi[i];
}
    printf("Proizvod %d brojeva je:%d",n,proizvod);
return proizvod;
}
int main()
{
    mnozenjenbrojeva(5);
    printf("Hello world!\n");
    return 0;
}
