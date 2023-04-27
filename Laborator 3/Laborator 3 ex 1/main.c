#include <stdio.h>
#include <stdlib.h>

int n, nr_div = 1;

int main()
{
    printf("Introduceti un numar: ");
    scanf("%d", &n);

    if(n > 0){
        for(int d = 1; d <= n / 2; d++)
            if(n % d == 0)
                nr_div++;
    }
    else
        nr_div = 0;

    printf("Numarul de divizori ai numarului %d este: %d", n, nr_div);

    return 0;
}
