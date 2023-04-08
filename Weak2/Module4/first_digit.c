#include <stdio.h>
int main()
{
    int number, temp, remaider, value;
    scanf("%d", &number);
    temp = number;
    while (temp != 0)
    {
        remaider = temp % 10;
        value = temp / 10;
        temp = value;
    }
    if (remaider % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}