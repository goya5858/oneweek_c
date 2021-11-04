#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    FILE *file;
    char line[SIZE];
    line[0] = '\0';
    file = fopen("./sample.txt", "r");
    if (file==NULL)
    {
        printf("ファイルを開ません\n");
        exit(1);
    }

    while (fgets(line, SIZE, file) != NULL)
    {
        printf("%s", line);
    }
    fclose(file);
}