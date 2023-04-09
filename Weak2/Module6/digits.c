#include <stdio.h>
int main()
{
    int number;
    int input;
    int temp;
    scanf("%d\n", &number);
    for (int i = 1; i <= number; i++)
    {
        scanf("%d", &input);
        temp = input;
        do
        {
            printf("%d ", temp % 10);
            temp = temp / 10;

        } while (temp != 0);
        printf("\n");
    }
    return 0;
}