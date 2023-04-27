#include <stdio.h>
#include <stdlib.h>

int caini, pisici, gaini;
int total;

int main()
{
    scanf("%d", &caini);

    pisici = 2 * caini;
    gaini = 2 * pisici;

    total = caini + pisici + gaini;

    printf("%d", total);

    return 0;
}
