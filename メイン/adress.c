#include <stdio.h>

int main(void)
{
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'a';

    printf("サイズは%dbyte, アドレスは%x \n", sizeof(int), &a);
    printf("サイズは%dbyte, アドレスは%x \n", sizeof(double), &b);
    printf("サイズは%dbyte, アドレスは%x \n", sizeof(float), &c);
    printf("サイズは%dbyte, アドレスは%x \n", sizeof(char), &d);
}
