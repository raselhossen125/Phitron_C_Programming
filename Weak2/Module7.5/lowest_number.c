#include <stdio.h>
int main()
{
    int n, lowest, position;
    scanf("%d", &n);
    int a[n];
    lowest = a[0];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < lowest)
        {
            lowest = a[i];
            position = i;
        }
    }
    printf("%d %d", lowest, position);
    return 0;
}