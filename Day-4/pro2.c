#include <stdio.h>

int main()
{
    int a, b, c, d , e;
    
    printf("Enter a : \n");
    scanf("%d", &a);

    printf("Enter b: \n");
    scanf("%d", &b);

    printf("Enter c: \n");
    scanf("%d", &c);

    printf("Enter d: \n");
    scanf("%d", &d);

    printf("Enter e: \n");
    scanf("%d", &e);


    if (a > d && a > b && a > c && a > e)
    {
        printf("A is max\n");
    }
    else if (b > c && b > d && b > e)
    {
        printf("B is max\n");
    }
    else if (c > d && c > e)
    {
        printf("C is max\n");
    }
    else if (d > e)
    {
        printf("d is max\n");
    }
    else
    {
        printf("e is max\n");
    }

    return 0;
}