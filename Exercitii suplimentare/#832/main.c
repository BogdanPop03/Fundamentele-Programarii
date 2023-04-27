#include <stdio.h>
#include <stdlib.h>

int nota;

int main()
{
    scanf("%d", &nota);

    if(nota < 5){
        printf("%s", "corigent");
    }
    else{
        printf("%s", "promovat");
    }

    return 0;
}
