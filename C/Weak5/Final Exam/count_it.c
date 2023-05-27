#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    fgets(s, 1000, stdin);
    int capital = 0;
    int small = 0;
    int space = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else
        {
            space++;
        }
    }
    printf("Capital - %d\n", capital);
    printf("Small - %d\n", small);
    printf("Spaces - %d\n", space);
    return 0;
}