#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int remaider = number % 10;
    int quotient = number / 10;
    (remaider % quotient == 0 || quotient % remaider == 0)
        ? printf("YES\n")
        : printf("NO\n");
    return 0;
}