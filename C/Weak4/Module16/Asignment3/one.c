#include <stdio.h>

int add(int x, int y)
{
    int result = x + y;
    return result;
}

int main()
{
    int a = 5;
    int b = 3;
    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}