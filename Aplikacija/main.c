#include <stdio.h>
#include <stdlib.h>

int oduzimanje_n_brojeva(int n)
{
    int razlika = 0;
    for (int i = 0; i < n; i++)
    {
        razlika -= i;
    }
    return razlika;
}
int main()
{
    int n;
    printf("Unesite n:\n");
    scanf("%d", &n);
    int razlika = oduzimanje_n_brojeva(n);
    printf("Razlika: %d", razlika);
    return 0;
}
