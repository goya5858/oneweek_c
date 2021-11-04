#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a[6];
    int i;

    srand((unsigned int)time(NULL));
    
    for (i=0; i<6; i++)
    {
        a[i] = rand()%10+1;
    }

    for (i=0; i<6; i++)
    {
        printf("a[%d]=%d ", i, a[i]);
    }
    printf("\n");
}