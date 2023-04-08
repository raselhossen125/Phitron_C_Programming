#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 65 && x <= 90)
    {
        x += 32;
        printf("%c\n", x);
    }
    else
    {
        x -= 32;
        printf("%c\n", x);
    }
    return 0;
}