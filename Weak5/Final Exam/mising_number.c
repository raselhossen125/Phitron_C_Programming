#include <stdio.h>
int main()
{
    int numberOfTestCase;
    scanf("%d", &numberOfTestCase);
    int ar[numberOfTestCase];
    int result[numberOfTestCase];
    for (int i = 0; i < numberOfTestCase; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &ar[j]);
        }
        int sum = 0;
        int first = 0;
        for (int j = 0; j < 4; j++)
        {
            if (ar[j] == ar[0])
            {
                first = ar[j];
            }
            else
            {
                sum += ar[j];
            }
        }
        result[i] = first - sum;
    }
    for (int i = 0; i < numberOfTestCase; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}