#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int armyAges[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &armyAges[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (armyAges[j] > armyAges[j + 1])
            {
                int tempAge = armyAges[j];
                armyAges[j] = armyAges[j + 1];
                armyAges[j + 1] = tempAge;
            }
        }
    }
    int middle = n / 2;
    if (n % 2 == 0)
    {
        printf("%d %d\n", armyAges[middle - 1], armyAges[middle]);
    }
    else
    {
        printf("%d\n", armyAges[middle]);
    }

    return 0;
}