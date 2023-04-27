#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    scanf("%d", &x);

    for(int numar = 2; numar <= x; numar += 2)
        printf("%d ", numar);

    return 0;
}
