#include <string.h>
#include <stdio.h>

int main(void)
{
    char s[10];
    int len;

    strcpy(s, "ABC");
    printf("S=%s\n", s);

    strcat(s, "DEF");
    printf("s=%s\n", s);

    len=strlen(s);
    printf("文字の長さ:%d\n", len);
}