#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int var = 20;
    float var1 = 420.69;

    printf("var = %d\nvar1 = %.2f\n", var, var1);

    int var2;
    float var3;

    scanf("%d%f", &var2, &var3);
    printf("%d\n%.2f\n", var2, var3);

    char sir[100];

    scanf("%s", sir);
    printf("%s", sir);

    return 0;
}
