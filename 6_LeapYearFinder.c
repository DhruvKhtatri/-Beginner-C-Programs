#include <stdio.h>
int main()
{
	//Program To find Leap Year
	int year;
	printf("Enter a Year of Your Choice\n");
	scanf("%d",&year);
	if (year<0)
	{
		printf("My Calender don't have Negative Years\n");
	}
	else if (year==0)
	{
		printf("Gregorian Calenders Start With Year 1 not 0\n");
	}
	else if ( (year%400==0) || (year%4==0 && year%100!=0))
	{
		printf("Congratulations! You have Found A Leap Year\n");
	}
	else 
	{
		printf("Sorry! You Failed To Find A Leap Year\n");
	}
	return 0;
}
