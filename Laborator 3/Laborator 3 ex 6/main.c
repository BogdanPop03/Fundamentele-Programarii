#include <stdio.h>
#include <stdlib.h>

int m, n;
int cmmdc, cmmmc;

int main()
{
    printf("Introduceti valoarea numarului m: ");
    scanf("%d", &m);
    printf("Introduceti valoarea numarului n: ");
    scanf("%d", &n);

    int a = m, b = n;

    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }

    cmmdc = a;

    cmmmc = (m * n) / cmmdc;

    printf("CMMDC: %d\nCMMMC: %d", cmmdc, cmmmc);

    return 0;
}
