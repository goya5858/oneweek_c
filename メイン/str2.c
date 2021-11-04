# include <string.h>
#include <stdio.h>

struct student {
    int id;
    char name[256];
    int age;
};

typedef struct student student_data;
// student_data と書くだけで　struct student と書くのと同じことと定義している
// typedef はstruct以外の他の文法でも使用できる

int main(void)
{
    int i;
    student_data data[] = {
    //struct student data[] = {
        {1, "山田たろう", 18},
        {2, "佐藤りょうこ", 19},
        {3, "太田ひかる", 18},
        {4, "田中ゆうこ", 18}
    };

    for (i=0; i<4; i++)
    {
        printf("学籍番号:%d, 名前:%s, 年齢:%d\n", data[i].id, data[i].name, data[i].age);
    }
}