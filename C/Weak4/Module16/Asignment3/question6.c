#include <stdio.h>

// Pass by value function
void square(int num)
{
    num = num * num;
    printf("Inside square function: %d\n", num);
}

// Pass by reference function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    square(a);
    printf("After calling square function: %d\n", a);

    int b = 100, c = 200;
    swap(&b, &c);
    printf("After calling swap function: b=%d, c=%d\n", b, c);

    return 0;
}