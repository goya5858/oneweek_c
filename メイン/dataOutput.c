#include "../ヘッダー/dataOutput.h"
#include <stdio.h>

extern int Error;

void showStudentData(student * data)
{
    if (data != NULL)
    {
        printf("id:%d, name:%s\n", data->id, data->name);
    }
    else 
    {
        printf("データが存在しません\n");
    }
}

void showError()
{
    switch(Error)
    {
    case MESSAGE_OK:
        printf("OK\n");
        break;
    case MESSAGE_ERROR:
        printf("Error\n");
        break;
    }
}