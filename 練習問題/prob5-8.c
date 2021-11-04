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
        d[i] = rand()%21-10;
    }

    for (i=0; i<5; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");

    printf("0より大きい数 : ");
    cnt = 0;
    for (i=0; i<5; i++)
    {
        if (d[i]>0)
        {
            cnt += 1;
        }
    }
    printf("%d個\n", cnt);

    printf("0より小さい数 : ");
    cnt = 0;
    for (i=0; i<5; i++)
    {
        if (d[i]<0)
        {
            cnt += 1;
        }
    }
    printf("%d個\n", cnt);

    printf("0の数 : ");
    cnt = 0;
    for (i=0; i<5; i++)
    {
        if (d[i]==0)
        {
            cnt += 1;
        }
    }
    printf("%d個\n", cnt);
}

