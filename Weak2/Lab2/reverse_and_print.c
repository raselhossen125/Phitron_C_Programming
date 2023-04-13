#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i % 2 == 0)
        {
            count++;
            b[count] = a[i];
        }
    }
    for (int i = count; i >= 0; i--)
    {
        if (i == 0)
        {
            continue;
        }
        printf("%d ", b[i]);
    }
    return 0;
}