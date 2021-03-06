#include <stdio.h>
#include <string.h>

typedef struct 
{
    int id;
    char name[256];
    int age;
} 
student_data;
// student_data　と書くだけで構造体が作れる

void setData(student_dat *, int, char*, int);
void showData(student_data *);

int main(void)
{
    student_data data[4];
    int i;
    int id[] = {1,2,3,4};
    char name[][256] = {"山田たろう", "佐藤りょうこ", "太田ひかる", "仲田裕子"};
    int age[] = {18,19,18,18};

    for (i=0; i<4; i++)
    {
        setData(data[i], id[i], name[i], age[i]);
    }

    for (i=0; i<4; i++)
    {
        showData(data[i]);
    }
    return 0;
}

void setData(student_data data, int id, char* name, int age)
{
    data.id = id;
    strcpy(data.name, name);
    data.age = age;
}

void showData(student_data data)
{
    printf("学籍番号%d, 名前%s, 年齢%d\n", data.id, *data.name, data.age);
}
