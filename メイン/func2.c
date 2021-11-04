#include <stdio.h>

int max(int, int);
void show(int);
void line();

int main(void) {
    int n1 = 4, n2=5;
    line();
    show(n1);
    show(n2);
    printf("大きい方の数字は%dです\n", max(n1, n2));
    line();
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    }
    return n2;
}

void show(int n1) {
    printf("数字 : %d\n", n1);
}

void line(){
    printf("******\n");
}