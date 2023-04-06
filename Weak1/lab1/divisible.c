#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n >= 3)
    {
        n -= 3;
    }

    if (n == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
