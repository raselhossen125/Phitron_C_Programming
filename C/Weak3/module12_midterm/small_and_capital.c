#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000];
    int upper = 0;
    int lower = 0;
    scanf("%s", S);
    for (int i = 0; i < (strlen(S)); i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    printf("%d %d", upper, lower);
    return 0;
}