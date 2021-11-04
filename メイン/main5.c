#include <stdio.h>
#include "../ヘッダー/studentDatabase.h"
#include "../ヘッダー/dataOutput.h"

int main(void)
{
    int i;
    char names[][LENGTH] = {"山田太郎", "太田理子", "大山次郎", "山口さやか"};
    int ids[] = {1,2,2,3};

    initDatabase();
    for (i=0; i<4; i++)
    {
        add(ids[i], names[i]);
        printf("登録:%d %s\n", ids[i], names[i]);
        showError();
    }

    for (i=0; i<3; i++)
    {
        showStudentData( get(i+1) );
    }
}