#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char *str = (char*)calloc(8, sizeof(char));
    while (gets(str) != NULL)
    {
        int cnt = strlen(str);
        int i;
        printf("I am ");
        for (i = 0; i < cnt; i++)
            printf("%c", *(str + i));
        printf(",yes,I can!\n");
    }
    return 0;
}
