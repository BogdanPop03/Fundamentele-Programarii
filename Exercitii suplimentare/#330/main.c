#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    scanf("%d", &x);

    for(int indice = 1; indice <= x; indice++)
        printf("%d ", indice * 2);

    return 0;
}
