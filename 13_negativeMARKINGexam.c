#include <stdio.h>
int main()
{
	char a1,a2,a3;
	int tm=0;
	printf("Exam to Find Marks:\n");
	printf("RULES: 4 for Each Right and -1 for Each Wrong \nWrite a,b,c's as Answer\n");
	printf("Maximum Marks are 12 and Minimum is -3\n");
	printf("How many Colour in our Flag\na.1  b.2  c.4\nAns:");
	scanf(" %c",&a1);//right ans is C
	printf("Which Colour Represent Sacrifice\na.blue  b.orange  c.green\nAns:");
	scanf(" %c",&a2);//right ans is B
	printf("What is Colour of Chakra at Middle:\na.blue  b.orange  c.green\nAns:");
	scanf(" %c",&a3);//right ans is A
	if (a1=='c' || a1=='C')
	{
		tm=tm+4; //tm+=4
	}
	else 
	{
		tm=tm-1; //tm-=1
	}
	if (a2=='b' || a2=='B')
	{
		tm=tm+4; //tm+=4
	}
	else 
	{
		tm=tm-1; //tm-=1
	}
	if (a3=='a' || a3=='A')
	{
		tm=tm+4; //tm+=4
	}
	else 
	{
		tm=tm-1; //tm-=1
	}
	printf("Your Total Marks is %d",tm);
	return 0;
	
}
