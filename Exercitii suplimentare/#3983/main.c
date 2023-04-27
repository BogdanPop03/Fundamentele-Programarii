#include <stdio.h>
#include <stdlib.h>

int x, y;

int main()
{
    scanf("%d %d", &x, &y);

    for(int indice = x; indice >= 1; indice--){
        int aux = y * indice;
        printf("%d ", aux);
    }

    return 0;
}
