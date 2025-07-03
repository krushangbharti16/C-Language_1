#include <stdio.h>
int main()
{
    int i = 1, N;
    printf("enter the value of N; ");
    scanf("%d ", &N);

    do
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;

    } while (i <= 9);
}