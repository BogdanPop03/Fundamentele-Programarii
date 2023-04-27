#include <stdio.h>
#include <stdlib.h>

int a, b, x;

int main()
{
    scanf("%d%d%d", &a, &b, &x);

    if(a <= x && b >= x){
        printf("%s", "DA");
    }
    else{
        printf("%s", "NU");
    }

    return 0;
}
