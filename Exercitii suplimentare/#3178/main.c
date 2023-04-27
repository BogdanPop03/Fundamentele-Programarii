#include <stdio.h>
#include <stdlib.h>

int fete, baieti;
int nr_zile;
int total;

int main()
{
    scanf("%d%d%d", &fete, &baieti, &nr_zile);

    total = nr_zile * (fete * 3 + baieti * 2);

    printf("%d", total);

    return 0;
}
