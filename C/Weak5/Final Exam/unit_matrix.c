#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int f = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                if (array[i][j] != 1)
                {
                    f = 0;
                }
            }
            else if (array[i][j] != 0)
            {
                f = 0;
            }
        }
    }

    if (f == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}