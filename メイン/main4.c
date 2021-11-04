#include <stdio.h>
#include "../ヘッダー/calc.h"
#include "../ヘッダー/showAnswer.h"

int main(void) 
{
    int a=1, b=2;
    printf("%d+%d = ", a, b);
    add(a, b);
    showAnswer();
    printf("%d-%d = ", a, b);
    sub(a,b);
    showAnswer();
}