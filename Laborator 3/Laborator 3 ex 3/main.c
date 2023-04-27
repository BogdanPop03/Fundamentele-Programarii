#include <stdio.h>
#include <stdlib.h>

int m, n;

int main()
{
    printf("Introduceti o valoare pentru numarul m: ");
    scanf("%d", &m);
    printf("Introduceti o valoare pentru numarul n: ");
    scanf("%d", &n);

    int p = 1;

    while(p < m){
        p *= n;
    }

    if(p == m)
        printf("DA");
    else
        printf("NU");

    return 0;
}
