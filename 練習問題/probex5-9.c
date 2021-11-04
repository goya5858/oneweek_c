#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    char moji1[16];
    char *moji2;
    int i;
    char * p1, * p2;

    printf("文字を入力(最大１６文字)");
    scanf("%s", moji1);

    moji2 = malloc(sizeof(char) * (strlen(moji1) + 1));
    p1 = moji1; //moji1の最初の文字のポインタを渡す
    p2 = &moji2[strlen(moji1)-1];

    for (i=0; i<strlen(moji1)+1; i++){
        *p2 = *p1;
        p1++;
        p2--;
    }

    moji2[strlen(moji1)] = '\0'; //最後の部分に \0 を追加する
    printf("逆文字列:%s\n", moji2);
    free(moji2);
}