#include <stdio.h>
int main()
{
    int n, x;
    int value = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            value++;
        }
    }
    printf("%d", value);
    return 0;
}