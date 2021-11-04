#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file;
    file = fopen("./sample.txt", "w");
    if (file==NULL)
    {
        printf("ファイルを開ません\n");
        exit(1);
    }
    fprintf(file, "Helloworld\r\n");
    fprintf(file, "ABCDEFG\r\n");
    fclose(file);
}