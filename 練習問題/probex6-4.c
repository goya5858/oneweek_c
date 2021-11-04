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
void show1(student_data*); //配列のポインタを渡す
void show2(student_data*); //配列のポインタを渡す
void show3(student_data*); //配列のポインタを渡す
void show4(student_data*); //配列のポインタを渡す
void show5(student_data*); //配列のポインタを渡す

int main(void){
    int i;
    student_data data[STUDENT_NUM];
    int id[] = {1001, 1002, 1003, 1004, 1005};
    int kokugo[] = {82, 92, 43, 72, 99};
    int suugaku[] = {43, 83, 32, 73, 72};
    int rika[] = {53, 88, 53, 71, 82};
    int syakai[] = {84, 79, 45, 68, 91};
    int eigo[] = {45, 99, 66, 59, 94};

    for (i=0; i<5; i++){
        set( &data[i], id[i], kokugo[i], suugaku[i], rika[i], syakai[i], eigo[i]);
    }

    show1(&data[0]);
    show2(&data[0]);
    show3(&data[0]);
    show4(&data[0]);
    show5(&data[0]);
}

void set(student_data * data, int id, int kokugo, int suugaku, int rika, int syakai, int eigo){
    data->id = id;
    data->kokugo = kokugo;
    data->suugaku = suugaku;
    data->rika = rika;
    data->syakai = syakai;
    data->eigo = eigo;
}

void show1( student_data * pData ){
    int i, sum=0;

    for (i=0; i<5; i++){
        sum += pData->kokugo;
        pData++;
    }
    printf("国語平均 : %.2f\n", (double)sum/5.0);
}
void show2( student_data * pData ){
    int i, sum=0;

    for (i=0; i<5; i++){
        sum += pData->suugaku;
        pData++;
    }
    printf("数学平均 : %.2f\n", (double)sum/5.0);
}
void show3( student_data * pData ){
    int i, sum=0;

    for (i=0; i<5; i++){
        sum += pData->rika;
        pData++;
    }
    printf("理科平均 : %.2f\n", (double)sum/5.0);
}
void show4( student_data * pData ){
    int i, sum=0;

    for (i=0; i<5; i++){
        sum += pData->syakai;
        pData++;
    }
    printf("社会平均 : %.2f\n", (double)sum/5.0);
}
void show5( student_data * pData ){
    int i, sum=0;

    for (i=0; i<5; i++){
        sum += pData->eigo;
        pData++;
    }
    printf("英語平均 : %.2f\n", (double)sum/5.0);
}