#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int n, x, maxim = INT_MIN, count, ok = 1;

int main()
{
    printf("Introduceti valoarea numarului n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("Introduceti numarul %d: ", i);
        scanf("%d", &x);

        if(x > maxim){
            maxim = x;
            ok = 1;
        }
        else if(x == maxim)
            ok++;
    }

    printf("Numarul maxim este: %d\nFrecventa acestuia este: %d", maxim, ok);

    return 0;
}
