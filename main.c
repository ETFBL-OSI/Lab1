int mnozenje(int* niz, int n)
{
    int proizvod=1;
    for (int i=0; i<n; i++)
        proizvod*=niz[i];
    return proizvod;
}
