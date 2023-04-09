#include <stdio.h>
// #include <ctype.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (x >= 65 && x <= 90)
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (x >= 97 && x <= 122)
    {
        printf("ALPHA\nIS SMALL\n");
    }
    // if (isdigit(x))
    // {
    //     printf("IS DIGIT\n");
    // }
    // else if (isupper(x))
    // {
    //     printf("ALPHA\nIS CAPITAL\n");
    // }
    // else if (islower(x))
    // {
    //     printf("ALPHA\nIS SMALL\n");
    // }
    return 0;
}