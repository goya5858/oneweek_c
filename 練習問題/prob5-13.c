#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i,j;
    int d[3][3];
    int max=-1, min=10, num;

    srand((unsigned int)time(NULL));

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            num = rand()%10;
            if (max<num)
            {
                max=num;
            }
            if (min>num)
            {
                min=num;
            }
            d[i][j] = num;

            printf("%d ", num);
        }
        printf("\n");
    }
    printf("\n");

    printf("最大値 : %d\n", max);
    printf("最小値 : %d\n", min);
}