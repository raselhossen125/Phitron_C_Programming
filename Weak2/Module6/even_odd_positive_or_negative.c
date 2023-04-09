#include <stdio.h>
int main()
{
    int number;
    int value;
    int i;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        scanf("%d", &value);
        if (value % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (value > 0)
        {
            positive++;
        }
        else if (value < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}