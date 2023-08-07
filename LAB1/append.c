#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("output.txt", "a");

    printf("Enter a string : ");
    gets(str);

    fputs(str, fp);

    fclose(fp);

    return 0;
}