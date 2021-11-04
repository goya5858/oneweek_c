#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    int i;
    int d[5];
    int cnt;

    srand((unsigned int)time(NULL));

    for (i=0; i<5; i++)
    {
        d[i] = rand()%10+1;
    }

    for (i=0; i<5; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");

    for (i=0; i<5; i++)
    {
        for (cnt=0; cnt<d[i]; cnt++)
        {
            printf("*");
        }
        printf("\n");
    }
}