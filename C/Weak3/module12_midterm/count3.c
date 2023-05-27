#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int count[26] = {0};
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        count[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 'a' + i, count[i]);
    }

    return 0;
}
