#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    scanf("%d", &x);

    for(int numar = 1; numar <= x; numar++)
        printf("%d ", numar);

    printf("\n");

    for(int numar = x; numar >= 1; numar--)
        printf("%d ", numar);

    return 0;
}
