#include <stdio.h>
int main()
{
    int num;
    int count = 0;

    printf("Enter Num: ");
    scanf("%d", &num);

    while (num > 0)
    {
        count++;
        printf("%d ", num);
        num = num / 10;
    }

    printf("\n number of digits is: %d", count);

    return 0;
}