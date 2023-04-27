#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    scanf("%d", &x);

    for(int indice = x; indice >= 1; indice--)
        printf("%d ", indice);

    return 0;
}
