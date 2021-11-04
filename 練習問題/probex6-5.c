#include <stdio.h>
#include <string.h>

#define STUDENT_NUM 5

typedef struct 
{   /* data */
    int id;         //  学生番号
    int kokugo;     //  国語の点数
    int suugaku;    //  算数の点数
    int rika;       //  理科の点数
    int syakai;     //  社会の点数
    int eigo;       //  英語の点数
} student_data;

void set(student_data *, int, int, int, int, int, int);
void show(student_data *);

int main(void){
    int i;
    student_data data[STUDENT_NUM];
    int id[] = {1001, 1002, 1003, 1004, 1005};
    int kokugo[] = {82, 92, 43, 72, 99};
    int suugaku[] = {43, 83, 32, 73, 72};
    int rika[] = {53, 88, 53, 71, 82};
    int syakai[] = {84, 79, 45, 68, 91};
    int eigo[] = {45, 99, 66, 59, 94};

    student_data *pData=NULL;

    for (i=0; i<5; i++){
        set( &data[i], id[i], kokugo[i], suugaku[i], rika[i], syakai[i], eigo[i]);
    }

    pData = &data[0];
    printf("番号      国語    数学    理科    社会    英語    合計\n");
    for (i=0; i<STUDENT_NUM; i++){
        show(pData);
        pData++;
    }
}

void set(student_data * data, int id, int kokugo, int suugaku, int rika, int syakai, int eigo){
    data->id = id;
    data->kokugo = kokugo;
    data->suugaku = suugaku;
    data->rika = rika;
    data->syakai = syakai;
    data->eigo = eigo;
}

void show(student_data * pData){
    int sum=0;
    sum = pData->kokugo+pData->suugaku+pData->rika+pData->syakai+pData->eigo;
    printf("%d      %d      %d      %d      %d      %d      %d\n", 
    pData->id, pData->kokugo, pData->suugaku, 
    pData->rika, pData->syakai, pData->eigo, sum);
}