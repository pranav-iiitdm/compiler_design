#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    char str[300];
    int count = 0, count1 = 0, total = 0, digits = 0, others = 0, lines = 0, words =0;

    fp = fopen(argv[1], "r");

    while (fgets(str, 200, fp) != NULL)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
            {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                {
                    count++;
                }

                else
                {
                    count1++;
                }
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digits++;
            }  
            else if (str[i] == 10) {
                lines++;
                others++;
            }          
            else
            {
                others++;
            }
            total++;
        }

        char * token = strtok(str,"\n\t ");
        while(token != NULL) {
            words++;
            token = strtok(NULL,"\n\t ");
        }
    }

    printf("No.of Vowels : %d \n", count);
    printf("No.of Consonants : %d \n", count1);
    printf("No.of Digits : %d \n", digits);
    printf("No.of Other Characters : %d \n", others);
    printf("No.of Lines : %d\n", lines);
    printf("No.of Words : %d\n",words);
    printf("Total Characters : %d\n", total);

    fclose(fp);

    return 0;
}