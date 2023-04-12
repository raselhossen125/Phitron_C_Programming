#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int A[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }
    if (sum < 0)
    {
        sum *= -1;
        printf("%d", sum);
    }
    else
    {
        printf("%d", sum);
    }
    return 0;
}