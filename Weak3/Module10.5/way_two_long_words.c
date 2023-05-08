#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[100];
    char b[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int len = strlen(a[i]);
        if (len <= 10)
        {
            printf("%s\n", a[i]);
        }
        // else
        // {
        //     strcpy(b, a);
        //     for (int i = 0; i < len; i++)
        //     {
        //         if (i == 0 || i == len - 1)
        //         {
        //             printf("%c", b[i]);
        //         }
        //         else if (i == len - 1)
        //         {
        //             printf("%c", b[i]);
        //         }
        //     }
        // }
    }
    return 0;
}