#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int d[10];
    int i;

    srand((unsigned int)time(NULL));

    for (i=0; i<10; i++)
    {
        d[i] = rand()%10+1;
    }

    for (i=0; i<10; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");

    printf("奇数 : ");
    for (i=0; i<10; i++)
    {
        if (d[i]%2 == 1)
        {
            printf("%d ", d[i]);
        }
    }
    printf("\n");
    printf("偶数 : ");
    for (i=0; i<10; i++)
    {
        if (d[i]%2 == 0)
        {
            printf("%d ", d[i]);
        }
    }
    printf("\n");
}