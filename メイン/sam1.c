#include <stdio.h>

int main(void){
    int a = 1;
    int *pA=NULL;
    int *pAA=NULL;
    pA = &a;
    *pAA = a;

    printf("aのアドレスは%p\n",&a);
    printf("pAのアドレスは%p\n",pA);
    printf("pA2のアドレスは%p\n",pAA);
    printf("aの数値は%d\n", a);
    printf("pAの数値は%d\n", *pA);
    printf("pA2の数値は%d\n", *pAA);
}