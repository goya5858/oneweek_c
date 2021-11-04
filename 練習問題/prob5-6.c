#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int d[10];
    int i;
    int max = 0;
    int min = 11;

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

    for (i=0; i<10; i++)
    {
        if (min > d[i])
        {
            min = d[i];
        }
    }
    printf("最小値 : %d\n", min);

    for (i=0; i<10; i++)
    {
        if (max < d[i])
        {
            max = d[i];
        }
    }
    printf("最大値 : %d\n", max);
}