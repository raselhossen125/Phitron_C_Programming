#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %d\n", i - 1, A[i]);
        }
    }
    return 0;
}