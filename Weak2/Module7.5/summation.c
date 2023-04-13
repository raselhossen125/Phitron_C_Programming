#include <stdio.h>
int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    long long int A[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &A[i]);
        sum += A[i];
    }
    if (sum < 0)
    {
        sum *= -1;
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}