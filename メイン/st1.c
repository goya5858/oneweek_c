#include <stdio.h>
#include <string.h>

struct student 
{
    /* data */
    int id;
    char name[256];
    int age;
};

int main(void)
{
    struct student data; // struct タグ名 構造体変数名
    // 今回はstudentという構造体設定から data　という構造体変数を作成する
    data.id = 1;
    strcpy(data.name, "山田たろう");
    //data.name = "山田たろう\0"
    data.age = 18;

    printf("学籍番号:%d, 名前:%s, 年齢%d\n", data.id, data.name, data.age);
}
