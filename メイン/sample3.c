#include <stdio.h>

int main(void) {
    int a;
    printf("整数を入力 :");
    scanf("%d", &a);
    if (a > 0) {
        printf("入力した数は正の数です \n");
    }
    else if (a == 0) {
        printf("入力された数字は正の数ではありません \n");
    }
    else {
        printf("入力された数字は負の数です　\n");
    }
}