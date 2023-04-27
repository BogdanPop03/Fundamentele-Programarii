#include <stdio.h>
#include <stdlib.h>

int a, b;

int main()
{
    scanf("%d%d", &a, &b);

    if(a == b){
        printf("Copiii au varste egale");
    }
    else if(a > b){
        printf("Primul copil este mai mare cu %d ani", a - b);
    }
    else{
        printf("Al doilea copil este mai mare cu %d ani", b - a);
    }

    return 0;
}
