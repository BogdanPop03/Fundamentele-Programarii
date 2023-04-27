#include <stdio.h>
#include <stdlib.h>

int p1, p2;
int raspuns;

int main()
{
    scanf("%d%d", &p1, &p2);

    if(p1 <= p2){
        raspuns = p1 - (100 - p2);
    }
    else{
        raspuns = p2 - (100 - p1);
    }

    printf("%d", raspuns);

    return 0;
}
