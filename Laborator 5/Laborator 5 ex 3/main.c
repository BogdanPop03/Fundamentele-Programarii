#include <stdio.h>
#include <stdlib.h>

int n, v[100], k;

void rotire_la_stanga(int v[], int n, int k){
    int temp[k];

    for(int i = 0; i < k; i++)
        temp[i] = v[i];

    for(int i = k; i < n; i++)
        v[i - k] = v[i];

    for(int i = 0; i < k; i++)
        v[n - k + i] = temp[i];
}

int main()
{
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    scanf("%d", &k);

    rotire_la_stanga(v, n, k);

    for(int i = 0; i < n - 1; i++)
        printf("%d, ", v[i]);

    printf("%d", v[n - 1]);

    return 0;
}
