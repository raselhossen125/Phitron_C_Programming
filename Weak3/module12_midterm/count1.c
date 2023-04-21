#include <stdio.h>
int main()
{
    int n;
    int evenCount = 0;
    int oddCount = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("%d %d", evenCount, oddCount);
    return 0;
}