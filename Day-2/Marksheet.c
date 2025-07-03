#include <stdio.h>

int main()
{
	int English, Maths, Science, Rollno;
	float Avg;
	char Name[6];

	printf("Enter your Name\n");
	scanf("%s", Name);

	printf("Enter your Roll No :-.\n");
	scanf("%d", &Rollno);

	printf("Enter marks of English :-\n");
	scanf("%d", &English);

	printf("Enter marks of Maths :-\n");
	scanf("%d", &Maths);

	printf("Enter marks of Science :-\n");
	scanf("%d", &Science);

	Avg = (English+Maths+Science)/3;

	printf("\n  ____________________________________________");
    printf("\n |             Marksheet                      |");
    printf("\n |                                            |");
    printf("\n |____________________________________________|");
    printf("\n |  Rollno        :-   %d                     |",Rollno);
    printf("\n |  Name          :-   %s                     |",Name);
    printf("\n |  Marks of sub1 :-   %d                     |",English);
    printf("\n |  Marks of sub2 :-   %d                     |",Maths);
    printf("\n |  Marks of sub3 :-   %d                     |",Science);
    printf("\n |  Average Mark :-    %.2f                   |",Avg);
    printf("\n |____________________________________________|\n");


	if (English > 35 && Maths > 35 && Science > 35)
	{
		printf("You are pass\n");

		if (Avg > 90)
		{
			printf("grade is A\n");
		}
		else if (Avg > 75)
		{
			printf("grade is B\n");
		}
		else if (Avg > 80)
		{
			printf(" grade is C\n");
		}
		else if (Avg > 76)
		{
			printf(" grade is D\n");
		}
        else
        {
            printf(" grade is E\n");  
        }
	}
	else
	{
		printf("You are fail\n");
	}

	return 0;
}