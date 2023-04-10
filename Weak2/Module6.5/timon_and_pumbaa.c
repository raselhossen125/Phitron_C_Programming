#include <stdio.h>
int main()
{
    int number1, number2, answer;
    scanf("%d %d", &number1, &number2);
    answer = (number1 - number2 >= 0) ? (number1 - number2) : 0;
    printf("%d\n", answer);
    return 0;
}