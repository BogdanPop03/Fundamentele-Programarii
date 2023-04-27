#include <stdio.h>
#include <stdlib.h>

int num1, num2;
int suma;

int main()
{
    scanf("%d%d", &num1, &num2);

    suma = num1 % 10 + num2 % 10;

    suma %= 10;

    printf("%d", suma);

    return 0;
}
