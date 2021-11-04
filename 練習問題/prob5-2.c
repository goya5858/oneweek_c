#include <stdio.h>

int main(void)
{
    int i;
    double d[] = {1.2, -1.3, 5.2, 4.8};

    for (i=0; i<4; i++)
    {
        printf("d[%d]=%.1f ", i, d[i]);
    }
    printf("\n");
}