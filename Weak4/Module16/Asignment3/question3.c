#include <stdio.h>

int count_before_zero(int arr[], int s)
{
    int c = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        c++;
    }
    return c;
}

int main()
{
    int s;
    scanf("%d", &s);

    int arr[s];
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int c = count_before_zero(arr, s);
    printf("%d\n", c);

    return 0;
}