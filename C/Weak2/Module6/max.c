#include <stdio.h>
int main()
{
    int number, i, value, max = 0;
    scanf("%d\n", &number);
    for (i = 1; i <= number; i++)
    {
        scanf("%d", &value);
        if (value > max)
        {
            max = value;
        }
    }
    printf("%d\n", max);
    return 0;
}