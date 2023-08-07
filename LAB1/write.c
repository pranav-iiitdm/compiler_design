#include <stdio.h>

int main()
{
    FILE *fpi, *fpo;
    char str[100];

    fpi = fopen("input.txt", "r");
    fpo = fopen("output.txt", "w");

    while (!feof(fpi))
    {
        fgets(str, 20, fpi);

        fputs(str, fpo);
    }

    fclose(fpi);
    fclose(fpo);

    return 0;
}