#include<stdio.h>
void saberi_n(){
    int n=0,zbir=0,broj=0;
    printf("Unesi broj brojeva: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Unesi %d. broj: ",i+1);
        scanf("%d",&broj);
        zbir+=broj;
    }
    printf("Zbir brojeva je: %d",zbir);
}
