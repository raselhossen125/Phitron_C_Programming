#include <stdio.h>
int main()
{
    int n, s, count = 0;
    scanf("%d", &n);
    int A[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &s);
    for (int i = 1; i <= n; i++)
    {
        if (A[i] == s)
        {
            printf("%d", i - 1);
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("-1");
    }
    return 0;
}