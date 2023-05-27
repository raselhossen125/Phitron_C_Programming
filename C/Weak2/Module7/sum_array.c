#include <stdio.h>
int main()
{
    int sizeOfArray;
    int sum = 0;
    scanf("%d", &sizeOfArray);
    int number[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &number[i]);
        sum += number[i];
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d\n", number[i]);
    }
    printf("Sum : %d\n", sum);
    return 0;
}