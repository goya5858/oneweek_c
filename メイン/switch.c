#include <stdio.h>

int main(void){
    int a;
    printf("数字を入力してください\n");
    scanf("%d", &a);

    switch (a) {
        case 10:
            printf("ten\n");
            break;
        case 2:
            printf("two\n");
            break;
        default:
            printf("不適切な値です\n");
            break;
    }
}