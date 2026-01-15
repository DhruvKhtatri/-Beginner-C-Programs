//PROGRAM TO CHECK WHICH IS BIGGEST OF ENTERED 4 NUMBER 
/*
NOTE THAT IF 2 NUMBER ARE SAME AND ARE BIGGEST ALSO 
THEN THE FIRST BIGGEST IS CONSIDERED NOT THE OTHER
*/
#include <stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter 4 Number of Your Choice:");
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(a==b && b==c && c==d && a==d)
	{
		printf("All have same Value");
	}
	else if (a>=b && a>=c && a>=d)
	{
		printf("First is Biggest");
	}
	else if (b>=a && b>=c && b>=d)
	{
		printf("Second is Biggest");
	}
	else if (c>=a && c>=b && c>=d)
	{
		printf("Third is Biggest");
	}
	else if (d>=b && d>=c && d>=a)
	{
		printf("Fourth is Biggest");
	}
	return 0;
}
