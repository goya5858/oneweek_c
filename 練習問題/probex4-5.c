#include <stdio.h>
#include <string.h>

int main(void){
    char moji1[256], moji2[256];
    char *p1, *p2;

    printf("文字列１:");
	scanf("%s", moji1);
	printf("文字列２:");
	scanf("%s", moji2);

    p1 = moji1; p2 = moji2;

    while (*p1 != '\0'){
        printf("%c", *p1);
        p1++;
    }
    while (*p2 != '\0'){
        printf("%c", *p2);
        p2++;
    }
    printf("\n");
}