#include <stdio.h>
#include <stdlib.h>

int a, b, c;

int main()
{
    scanf("%d%d%d", &a, &b, &c);

    if((a % 2 == 0 && b % 2 == 0) || (a % 2 == 0 && c % 2 == 0) || (b % 2 == 0 && c % 2 == 0)){
        printf("%s", "pare");
    }
    else{
        printf("%s", "impare");
    }

    return 0;
}
