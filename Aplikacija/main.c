#include <stdio.h>
#include <stdlib.h>

int sabiranje_n_brojeva(int n)
{
    int k = 0, rez = 0;

    for(int i = 0; i < n; i++)
    {
        printf("Unesite %d. broj: ", i + 1);
        scanf("%d", &k);

        rez += k;
    }

    return rez;
}

int main()
{
    printf("Hello world!\n");

    printf("Unesite n: ");
    int n;

    do
        scanf("%d", &n);
    while(n < 1);

    printf("%d", sabiranje_n_brojeva(n));


    return 0;


}
