#include <stdio.h>
#include <stdlib.h>

#define N 100

int x[N], n, min, max, index_max, nr;
int suma;

int main()
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x[i]);
        suma += x[i];
    }

    min = x[0];
    max = x[0];

    for(int i = 0; i < n; i++){
        if(x[i] < min)
            min = x[i];
        if(x[i] > max){
            max = x[i];
            index_max = i;
        }
    }

    float ma = (float)suma / (float)n;

    for(int i = 0; i < n; i++){
        if(x[i] > ma)
            nr++;
    }

    printf("min = %d\n\n", min);
    printf("poz_max = %d\n\n", index_max);
    printf("ma = %.2f\n\n", ma);
    printf("gt_ma = %d", nr);

    return 0;
}
