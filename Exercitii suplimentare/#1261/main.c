#include <stdio.h>
#include <stdlib.h>

int x;
int count;

int main()
{
    scanf("%d", &x);

    while(x != 0){
        if(x % 2 == 0)
            count++;
        scanf("%d", &x);
    }

    if(count != 0)
        printf("%d", count);
    else
        printf("NU EXISTA");

    return 0;
}
