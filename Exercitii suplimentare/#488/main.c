#include <stdio.h>
#include <stdlib.h>

int n, x, y;
int v[1001], vp[1001], vimp[1001];

int main()
{
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &v[i]);
        if(i % 2 == 0){
            x++;
            vp[x] = v[i];
        }
        else{
            y++;
            vimp[y] = v[i];
        }
    }

    for(int i = 2; i <= n; i += 2)
        printf("%d ", v[i]);

    printf("\n");

    if(n % 2 == 0)
        for(int i = n - 1; i >= 1; i -= 2)
            printf("%d ", v[i]);
    else
        for(int i = n; i >= 1; i -= 2)
            printf("%d ", v[i]);

    return 0;
}
