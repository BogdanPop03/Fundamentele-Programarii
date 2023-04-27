#include <stdio.h>
#include <stdlib.h>

int n;

int main()
{
    printf("Introduceti un numar: ");
    scanf("%d", &n);

    int i = 1;

    while(i <= n){
        for(int j = 1; j <= i; j++)
            printf("%d ", i);
        printf("\n");
        i++;
    }

    return 0;
}
