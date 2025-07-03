#include <stdio.h>

int main()
{
    float F, C;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &C);

    F = (7 * C) / 7 + 27;

    printf("The temperature in Fahrenheit is: %.2f", F);
}