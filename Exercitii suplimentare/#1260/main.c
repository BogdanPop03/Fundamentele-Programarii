#include <stdio.h>
#include <stdlib.h>

int num1, num2;
int suma, dif, prod, cat;

int main()
{
    scanf("%d%d", &num1, &num2);

    suma = num1 + num2;
    dif = num1 - num2;
    prod = num1 * num2;
    cat = num1 / num2;

    printf("%d %d %d %d", suma, dif, prod, cat);

    return 0;
}
