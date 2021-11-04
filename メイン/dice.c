#include <stdio.h>

int main(void){
    int dice;
    printf("数字を入れてください\n");
    scanf("%d", &dice);

    if (0<dice && dice<=6){
        if (dice==1 || dice==3 || dice==5){
            printf("半\n");
        }
        else {
            printf("長\n");
        }
    }
    else {
        printf("サイコロの数字を入れてください\n");
    }

}