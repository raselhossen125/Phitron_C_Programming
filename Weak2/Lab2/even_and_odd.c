#include <stdio.h>
int main()
{
    int n;
    int even = 0;
    int odd = 0;
    scanf("%d", &n);
    int v[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0)
        {
            even += v[i];
        }
        else
        {
            odd += v[i];
        }
    }
    printf("%d %d", even, odd);
    return 0;
}