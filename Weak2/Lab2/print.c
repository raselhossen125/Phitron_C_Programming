#include <stdio.h>
int main()
{
    int n, x, v;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &x, &v);
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            b[i] = v;
        }
        else
        {
            b[i] = a[i];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", b[i]);
    }
    return 0;
}