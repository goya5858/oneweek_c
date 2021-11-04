#include <stdio.h>
  
int add(int, int);
int sub(int, int);

int main(void)
{
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);

    printf("%d*%d*%d=%d\n", a, b, c, a*b*c );
}

int add(int n1, int n2)
{
    return n1+n2;
}
int sub(int n1, int n2)
{
    return n1-n2;
}

