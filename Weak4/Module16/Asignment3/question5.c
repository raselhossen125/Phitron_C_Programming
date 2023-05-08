#include <stdio.h>
#include <string.h>

int is_palindrome(char *ch)
{
    int i, b = 0, n;
    n = strlen(ch);
    for (i = 0; i < n / 2; i++)
    {
        if (ch[i] == ch[n - i - 1])
            b++;
    }
    if (b == i)
        return 1;
    else
        return 0;
}
int main()
{
    char ch[1000];
    scanf("%s", ch);

    int value = is_palindrome(ch);
    if (value == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}