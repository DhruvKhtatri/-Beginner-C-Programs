#include<stdio.h>
int main()
{
	int y;
	int i=1;
	while (i==1)
	{
	
	printf("\nEnter your birth year:");
	scanf("%d",&y);
	if (y<1883)
	{
		printf("Probably You are Ghost Generation using This Program \n");
	}
	else if (y>=1883 && y<=1900)
	{
		printf("You are \"Lost Generation\"\n");
	}
	else if (y>=1901 && y<=1927)
	{
		printf("You are \"Greatest Generation\"\n");
	}
	else if (y>=1928 && y<=1945)
	{
		printf("You are \"The Silent Generation\"\n");
	}
	else if (y>=1946 && y<=1964)
	{
		printf("You are \"Baby Boomers\"\n");
	}
	else if (y>=1965 && y<=1980)
	{
		printf("You are \"Generation X\"\n");
	}
	else if (y>=1981 && y<=1996)
	{
		printf("You are \"Millennials\"\n");
	}
	else if (y>=1997 && y<=2012)
	{
		printf("You are \"Generation Z\"\n");
	}
	else if (y>=2013 && y<=2024)
	{
		printf("You are \"Generation Alpha\"\n");
	}
	else if (y>=2025 && y<=2026)
	{
		printf("You are \"Generation Beta\"\n");
	}
	else if (y>=2027 && y<=2039)
	{
		printf("You will be called \"Generation Beta\"\n");
		printf("I am amazed You are using this Program in Heaven\n");
	}
	else if (y>=2040)
	{
		printf("You are Considerd as Ghost on Earth or Probably A Time Traveller\n");
		printf("You are not named on Earth\n");
		printf("I will Message you if you are NAMED\n");
	}
	else
	{
		printf("Data Not Available\n");
	}
	printf("\nPress 1 to Continue  OR   Press 0 to Exit:\n");
	scanf("%d",&i);
	printf("\n\n\n");
    }
	return 0;
}
