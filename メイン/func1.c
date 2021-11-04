#include <stdio.h>

double avg(double, double); //プロトタイプ宣言

int main(void) {
    double d1, d2, d3;
    double a=1.2, b=2.3, c=3.4;

    d1 = avg(a,b);
    d2 = avg(1.2, 5.3);
    d3 = avg(1.9, c);

    printf("d1 :%f, d2:%f, d3:%f \n", d1, d2, d3);
}

double avg(double l, double m){
    double r = (l+m)/2.0;
    return r;
}