#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int tiger = 0;
    int pathan = 0;
    int draw = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &ar[j]);
        }
        if (ar[0] > ar[1])
        {
            tiger++;
        }
        else if (ar[0] < ar[1])
        {
            pathan++;
        }
        else
        {
            draw++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger");
    }
    else if (tiger < pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}