#include <stdio.h>
#include <stdlib.h>

int numar;
int total = 1;

int main()
{
    scanf("%d", &numar);

    for(int i = 1; i <= 5; i++){
        total *= numar;
    }

    printf("%d", total);

    return 0;
}
