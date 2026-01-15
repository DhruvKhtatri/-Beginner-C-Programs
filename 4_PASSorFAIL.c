#include <stdio.h>
int main()
{
	float e,m,s;
	printf("Enter Your Marks of:\nEnglish\n");
	scanf("%f",&e);
	printf("Maths\n");
	scanf("%f",&m);
	printf("Science\n");
	scanf("%f",&s);
	if (e<33.0 || m<33.0 || s<33.0)
	{
		printf("You are failed in Individual Subject(s)");
	}
	else if (((e+m+s)/3.0)<40.0)
	{
		printf("You are failed due to less Total Marks");
	}
	else
	{
		printf("You have PASSED the exam");
	}
	return 0;
}
