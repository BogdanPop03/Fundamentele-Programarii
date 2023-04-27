#include <stdio.h>
#include <stdlib.h>

int v[5];
int suma;

int main()
{
    for(int i = 1; i <= 5; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 1; i<= 4; i++)
        for(int j = i + 1; j <= 5; j++)
            if(v[i] > v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }


    suma = v[3] + v[4] + v[5];

    printf("%d", suma);

    return 0;
}
