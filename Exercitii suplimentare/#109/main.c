#include <stdio.h>
#include <stdlib.h>

int numar;

int main()
{
    scanf("%d", &numar);

    if(numar % 2 == 0){
        printf("%d este par", numar);
    }
    else{
        printf("%d este impar", numar);
    }

    return 0;
}
