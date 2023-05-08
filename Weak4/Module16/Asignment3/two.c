#include <stdio.h>
#include <stdlib.h>

int getRandomNumber()
{
    return rand();
}

int main()
{
    int randomNumber = getRandomNumber();
    printf("The random number is %d\n", randomNumber);
    return 0;
}