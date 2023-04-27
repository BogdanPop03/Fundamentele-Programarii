#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 1000

void func(float v[N], int n, int numar){
    for(int i = 0; i < n; i++){
        switch(numar){
            case 0:
                v[i]++;
                break;
            case 1:
                v[i] *= 2;
                break;
            case 2:
                v[i] = (int)v[i] / 2;
                break;
            case 3:
                v[i] *= v[i];
                break;
            case 4:
                v[i] = sqrt(v[i]);
                break;
            default:
                printf("Ati introdus un numar care nu este acceptat.");
                return;
        }
    }

    printf("[");

    if(numar != 4){
        for(int i = 0; i < n - 1; i++){
            printf("%.0f, ", v[i]);
        }

        printf("%.0f]", v[n - 1]);
    }
    else{
        for(int i = 0; i < n - 1; i++){
            printf("%.6f, ", v[i]);
        }

        printf("%.6f]", v[n - 1]);
    }
}

int main()
{
    int n, numar;
    float v[N];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    scanf("%d", &numar);

    func(v, n, numar);

    return 0;
}
