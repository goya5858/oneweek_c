#include <stdio.h>

void numjudge(int);

int main(void)
{
    int num;
    printf("number :");
    scanf("%d", &num);

    numjudge(num);
}

void numjudge(int n)
{
    if (n==0)
    {
        printf("数字は０です\n");
    }
    else if (n%2==0)
    {
        printf("数字は偶数です\n");
    }
    else{
        printf("数字は奇数です\n");
    }
    
}