#include <stdio.h>
#include <string.h>

#define STUDENT_NUM 5

typedef struct 
{
    /* data */
    char name[256];
    int id;
    int sex;
    int grade;
} student_data;

void add(student_data *, char *, int, int, int); //student_data型のポインタを渡す
void show(student_data);

int main(void){
    char names[][256] = {"青木一", "遠藤京子", "加藤悟", "佐々木八重子", "田中徹"};
    int ids[] = {1001, 1002, 1003, 1004, 1005};
    int sexes[] = {0,1,0,1,0};
    int grades[] = {1,1,1,1,1};

    int i;
    student_data data[STUDENT_NUM]; //student_dataのデータ型を持つ大きさSTUDENT_NUMの配列

    for (i=0; i<STUDENT_NUM; i++){
        add(&data[i], names[i], ids[i], sexes[i], grades[i]);//student_data型のポインタを渡す
        show(data[i]);
        
    }
}   

void add(student_data * data, char * name1, int id1, int sex1, int grade1){
    strcpy(data->name, name1);
    data->id = id1;
    data->sex = sex1;
    data->grade = grade1;
}

void show(student_data data){
    printf("名前:%s\n", data.name);
    printf("性別:%d\n", data.sex);
    printf("学生記番号:%d\n", data.id);
    printf("学年:%d\n", data.grade);
    printf("\n");
}
