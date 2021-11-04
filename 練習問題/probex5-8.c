#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char mojis[3][256];
    int i, cnt=0, max=0;
    char * resluts[3]; //char型用のポインタ３つ

    for (i=0; i<3; i++){
        printf("文字列%d:", i+1);
        scanf("%s", mojis[i]);
    }

    for (i=0; i<3; i++){
        if (max<strlen(mojis[i])){
            max = strlen(mojis[i]);
        }
    }

    for (i=0; i<3; i++){
        if (max==strlen(mojis[i])){
            resluts[cnt] = mojis[i]; //条件を満たすstr配列のポインタを記憶しておく
            cnt++;
        }
    }

    for (i=0; i<cnt; i++){
        printf("%s\n", resluts[i]);
    }
}