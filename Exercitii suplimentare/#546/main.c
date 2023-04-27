#include <stdio.h>
#include <stdlib.h>

int n;
int v[1001];

int main()
{
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        scanf("%d", &v[i]);

    for(int i = 1; i <= n; i++)
        if(v[i] % v[n] == 0)
            printf("%d ", v[i]);

    return 0;
}
