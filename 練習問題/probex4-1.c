#include <stdio.h>

int main(void){
    int nums[] = {1,2,3,4,5};
    int i;
    int *p = NULL;
    p = &nums[4];
    printf("%d\n", nums[4] );
    printf("%p\n", &nums[4] );
    printf("%p\n", nums );

    for (i=0;i<5;i++){
        printf("%d ", *p);
        p--;
    }
    printf("\n");
}