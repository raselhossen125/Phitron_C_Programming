#include <stdio.h>

void printMultiplication(int x, int y)
{
    int multy = x * y;
    printf("The sum of %d and %d is %d\n", x, y, multy);
}

int main()
{
    int a = 5;
    int b = 3;
    printMultiplication(a, b);
    return 0;
}