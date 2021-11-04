#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void show(int *); //int型を持つポインタ(or配列)を引数に渡す
void bai(int *); //int型を持つポインタ(or配列)を引数に渡す

int main(void){
    int i;
    int d[5];

    srand((unsigned int)time(NULL));
    for (i=0; i<5; i++){
        d[i] = rand()%101;
    }
    printf("発生した乱数:\n");
    show(d);
    bai(d);
    printf("２倍した値:\n");
    show(d);
}

void show(int * d){
    int i;
    
    for (i=0; i<5; i++){
        printf("%d ", d[i]);
    }
    printf("\n");
}

void bai(int * d){
    int i;
    for (i=0; i<5; i++){
        d[i] = 2*d[i];
    }
}