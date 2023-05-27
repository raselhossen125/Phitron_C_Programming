#include <stdio.h>
int main()
{
    int n;
    int max = 0;
    int min = 2147483647;
    int maxIndex = 0;
    int minIndex = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
        else if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == maxIndex)
        {
            printf("%d ", min);
        }
        else if (i == minIndex)
        {
            printf("%d ", max);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}