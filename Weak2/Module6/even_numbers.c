#include <stdio.h>
int main()
{
    int number, i, count = 0;
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("-1\n");
    }
    return 0;
}