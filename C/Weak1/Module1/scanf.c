#include <stdio.h>
int main()
{
    char first;
    int second;
    float third;

    printf("Enter any charecter : ");
    scanf("%c", &first);

    printf("Enter any integer number : ");
    scanf("%d", &second);

    printf("Enter any float number : ");
    scanf("%f", &third);

    printf("Charecter : %c\nInteger : %d\nFloat : %.2f", first, second, third);
    return 0;
}
