
#include <stdio.h>
int main()

{
    int num;
    int first, last;

    printf("Enter the num: ");
    scanf("%d ", &num);

    last = num % 10;
    while (num > 0)
    {
        first = num % 10;
        num = num / 10;
    }
    printf("\nSum of first and last digit: %d", first+last);

    return 0;
}
