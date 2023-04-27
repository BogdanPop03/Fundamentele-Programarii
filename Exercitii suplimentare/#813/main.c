#include <stdio.h>
#include <stdlib.h>

int g_albe, g_rosii, g_verzi;
int total;

int main()
{
    scanf("%d", &g_albe);

    g_rosii = 2 * g_albe;
    g_verzi = g_rosii - 3;

    total = g_albe + g_rosii + g_verzi;

    printf("%d", total);

    return 0;
}
