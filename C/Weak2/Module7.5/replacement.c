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
        if (A[i] > 0)
        {
            printf("1 ");
        }
        else if (A[i] < 0)
        {
            printf("2 ");
        }
        else
        {
            printf("0 ");
        }
    }
    return 0;
}