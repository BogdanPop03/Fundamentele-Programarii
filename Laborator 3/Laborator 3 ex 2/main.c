#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n, div_primi;
int max_div, max_pow;

bool is_prime(int x){
    int flag = 0;
    if(x == 1)
        flag = 1;

    for(int d = 2; d <= x / 2; d++)
        if(x % d == 0){
            flag = 1;
            break;
        }
    return !((bool)flag);
}


int main()
{
    printf("Introduceti un numar: ");
    scanf("%d", &n);

    for(int d = 2;d <= n / 2; d++)
        if(is_prime(d))
            if(n % d == 0){
                div_primi++;
                int pow = 0;
                int aux = n;
                while(aux % d == 0){
                    pow++;
                    aux /= d;
                }
                if(pow > max_pow){
                    max_pow = pow;
                    max_div = d;
                }
            }

    if(is_prime(n) == true)
        div_primi++;

    printf("Numarul de divizori primi ai numarului %d: %d\n", n, div_primi);
    printf("Divizorul prim care apare la cea mai mare putere este: %d^%d", max_div, max_pow);

    return 0;
}
