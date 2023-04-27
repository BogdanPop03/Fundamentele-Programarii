#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    scanf("%d", &x);

    for(int numar = x * 2 - 1; numar >= 1; numar -= 2)
        printf("%d ", numar);

    return 0;
}
