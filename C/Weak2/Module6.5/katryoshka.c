#include <stdio.h>
int main()
{
    long long int eyes, mouths, bodies, answer;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);
    if (eyes == 0 || mouths == 0 || bodies == 0)
    {
        printf("0\n");
    }
    else
    {
        if (eyes <= mouths && eyes <= bodies)
        {
            answer = eyes;
            mouths -= eyes;
            bodies -= eyes;
            eyes = 0;
        }
        else if (mouths <= bodies)
        {
            answer = mouths;
            eyes -= mouths;
            bodies -= mouths;
            mouths = 0;
        }
        else
        {
            answer = bodies;
            eyes -= bodies;
            mouths -= bodies;
            bodies = 0;
        }
        if (bodies >= eyes / 2)
        {
            answer += eyes / 2;
        }
        else
        {
            answer += bodies;
        }
        printf("%lld\n", answer);
    }
    return 0;
}