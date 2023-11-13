

int najveci(int n, int niz[]){
    int x=niz[0];
    for(int i=1;i<n;i++){
        if(niz[i]>x) x=niz[i];
    }
    return x;
}