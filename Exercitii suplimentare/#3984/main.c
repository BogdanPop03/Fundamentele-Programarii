#include <stdio.h>
#include <stdlib.h>

int a, b;

int main()
{
    scanf("%d %d", &a, &b);

    for(int indice = 1; indice <= b; indice++){
        int aux = a * indice;
        printf("%d ", aux);
    }

    return 0;
}
