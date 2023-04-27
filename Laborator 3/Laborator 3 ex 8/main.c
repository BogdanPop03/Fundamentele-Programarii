#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;
int suma, cif_max, m, aux_m;
int p = 1, copie;
bool ok = false;

int main()
{
    printf("Introduceti un numar: ");
    scanf("%d", &n);

    copie = n;

    while(n){
        int cif = n % 10;
        suma += cif;
        if(cif > cif_max)
            cif_max = cif;
        if(cif % 2 == 0){
            aux_m += cif * p;
            p *= 10;
            ok = true;
        }

        n /= 10;
    }

    p = 1;

    while(aux_m){
        m += (aux_m % 10) * p;
        p *= 10;

        aux_m /= 10;
    }

    printf("Suma cifrelor numarului %d este: %d\n", copie, suma);
    printf("Cifra maxima a numarului %d este: %d\n", copie, cif_max);
    if(ok)
        printf("Numarul format din cifrele pare ale numarului %d este: %d", copie, m);
    else
        printf("NU EXISTA");

    return 0;
}
