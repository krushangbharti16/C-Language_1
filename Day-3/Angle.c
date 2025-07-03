#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter the angle1 and angle2: ");
    scanf("%d%d", &angle1, &angle2);

    angle3 = 180 - angle1 - angle2;

    printf("The angle3 is: %d", angle3);
}