#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int n, x;
int nr_poz, suma_neg, prod_pp = 1;
bool ok = false;

int main()
{
    printf("Introduceti valoarea numarului n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Introduceti numarul %d: ", i);
        scanf("%d", &x);
        if(x >= 0)
            nr_poz++;
        if(x < 0)
            suma_neg += x;
        if(sqrt(x) == (int)sqrt(x)){
            prod_pp *= x;
            ok = true;
        }
    }

    printf("Numarul numerelor pozitive este: %d", nr_poz);
    printf("\nSuma numerelor negative este: %d",suma_neg);
    if(ok)
        printf("\nProdusul patratelor perfecte este: %d", prod_pp);
    else
        printf("\nNu exista patrate perfecte intre numerele citite.");

    return 0;
}
