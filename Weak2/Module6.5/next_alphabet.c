#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    (ch == 122) ? ch = 97 : (ch += 1);
    printf("%c\n", ch);
    return 0;
}