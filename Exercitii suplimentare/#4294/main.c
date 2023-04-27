#include <stdio.h>
#include <stdlib.h>

int x;

int main()
{
    scanf("%d", &x);

    for(int a = 1; a <= x / 2; a++){
        int b = x - a;
        printf("%d %d\n", a, b);
    }

    return 0;
}
