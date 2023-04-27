#include <stdio.h>
#include <stdlib.h>

int tip1, tip2;
int numar_tip1, numar_tip2;
int nr_zile;
int total;

int main()
{
    scanf("%d%d%d%d%d", &tip1, &tip2, &numar_tip1, &numar_tip2, &nr_zile);

    total = nr_zile * (tip1 * numar_tip1 + tip2 * numar_tip2);

    printf("%d", total);

    return 0;
}
