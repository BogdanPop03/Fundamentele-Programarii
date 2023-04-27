#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;

bool is_prime(int x){
    bool flag = true;
    if(x == 1)
        flag = false;
    else
        for(int d = 2; d <= x / 2; d++)
            if(x % d == 0){
                flag = false;
                break;
            }

    return flag;
}

int main()
{
    printf("Introduceti un numar: ");
    scanf("%d", &n);

    for(int nr = n + 1; ;nr++)
        if(is_prime(nr)){
            printf("Cel mai mic numar prim mai mare ca si %d este: %d", n, nr);
            break;
        }

    return 0;
}
