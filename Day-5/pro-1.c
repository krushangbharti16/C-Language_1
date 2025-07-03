#include <stdio.h>
int main()
{

    int RollNo, Maths, Science, English, Total;
    float avg;
    char name[20];

    printf("Enter RollNo:  ");
    scanf("%d", &RollNo);
    printf("Enter name:  ");
    scanf("%s", &name);
    printf("Enter Maths:  ");
    scanf("%d", &Maths);
    printf("Enter Science:  ");
    scanf("%d", &Science);
    printf("Enter English:  ");
    scanf("%d", &English);
    Total = Maths + Science + English;
    avg = Total / 3;

    printf("\n----------------------\n");
    printf("\n|      Marksheet      |\n");
    printf("\n----------------------\n");
    printf("\n |    Roll No:   %d   |\n, Roll No");
    printf("\n |    Name   :   %s   |\n, name");
    printf("\n |    Maths  :   %d   \n, Maths");
    printf("\n |    Science:   %d   \n, Science");
    printf("\n |    English:   %d   \n, English");
    printf("\n |    Total  :   %d   \n, Total");
    printf("\n |    Avg    :   %f   \n, Avg");

    return 0;
}
