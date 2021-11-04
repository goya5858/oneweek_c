#include <stdio.h>

int main(void){
    double d[3];
    int i;
    double sum=0.0, avg=0.0;

    d[0] = 1.2;
    d[1] = 3.5;
    d[2] = -2.3;

    for (i=0; i < 3; i++) {
        printf("%i, %f \n", i, d[i]);
        sum += d[i];
    }
    avg = sum/3.0;
    printf("sum %f \n", sum);
    printf("avg %f\n", avg);
}