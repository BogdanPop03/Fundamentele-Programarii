#include <stdio.h>
#include <stdlib.h>

int x, y;
int total;

int main()
{
    scanf("%d%d", &x, &y);

    if(y % x != 0){
        total = y / x + 1;
    }
    else{
        total = y / x;
    }

    printf("%d", total);

    return 0;
}
