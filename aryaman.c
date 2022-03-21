#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1024

int substring_count(char *string, char *substring)
{
    int i, l1, l2;
    int ct = 0;

    l1 = strlen(string);
    l2 = strlen(substring);

    for (i = 0; i < l1 - l2 + 1; i++)
    {
        if (strstr(string + i, substring) == string + i)
        {
            ct++;
            i = i + l2 - 1;
        }
    }

    return ct;
}

int main()
{
    char string[MAX_SIZE];
    char substring[MAX_SIZE];
    int count = 0;

    printf("Enter a string: ");
    gets(string);

    printf("Enter a substring: ");
    gets(substring);

    count = substring_count(string, substring);
    printf("Substring occurrence count is: %d.\n", count);

    return 0;
}