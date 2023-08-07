#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    char str[300];

    fp = fopen("input.txt", "r");

    while (!feof(fp))
    {
        fgets(str, 10, fp);

        printf("%s", str);
    }

    fclose(fp);

    return 0;
}