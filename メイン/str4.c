#include <stdio.h>

typedef struct 
{
    /* data */
    int a;
    double d;
}
num_data;

void dealData1(num_data data); //値渡し
void dealData2(num_data * pData); //ポインタ渡し

int main(void)
{
    num_data n1 = {1, 1.2}, n2 = {1, 1.2};
    printf("n1のアドレス:0x%x n2のアドレス:0x%x\n", (unsigned int)&n1, (unsigned int)&n2);
    dealData1(n1);
    dealData2(&n2);
    printf("n1.a = %d n1.d = %f\n", n1.a, n1.d);
	printf("n2.a = %d n2.d = %f\n", n2.a, n2.d);   
}

void dealData1(num_data data2)
{
    printf("a=%d d=%f\n", data2.a, data2.d);
    printf("dealData1にわたってきたデータのアドレス :0x%x\n", (unsigned int)&data2);
    data2.a = 2;
    data2.d = 2.4;
}

void dealData2(num_data* pData)
{
    printf("a=%d, d=%f\n", pData->a, pData->d);
    printf("dealData2にわたってきたデータのアドレス :0x%x\n", (unsigned int)pData);
    pData->a = 2;
    pData->d = 2.4;
}