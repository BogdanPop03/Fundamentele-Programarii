#include <stdio.h>
#include <stdlib.h>

int n;
int v[1001];
int valpar, valimp;

int main()
{
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0)
            valpar++;
        else
            valimp++;
    }

    if(valpar > valimp)
        printf("%d", valpar - valimp);
    else
        printf("%d", valimp - valpar);

    return 0;
}
