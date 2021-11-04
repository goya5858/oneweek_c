# include <stdio.h>

#define PI 3.14

double circumference(int);
double area(int);

int main(void)
{
    double cir, are;
    int r;

    printf("半径:");
    scanf("%d", &r);

    printf("演習は%fです\n", circumference(r));
    printf("面積は%fです\n", area(r));
}

double circumference(int r)
{
    return 2.0*(double)r*PI;
}
double area(int r)
{
    return PI*(double)r*(double)r;
}