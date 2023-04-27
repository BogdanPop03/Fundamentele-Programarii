#include <stdio.h>
#include <stdlib.h>

int numar1, numar2;

int main()
{
    scanf("%d%d", &numar1, &numar2);

    if(numar1 >= numar2){
        printf("%d", numar1);
    }
    else{
        printf("%d", numar2);
    }

    return 0;
}
