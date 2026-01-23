// Program To find Perfect Metal For You
#include <stdio.h>
int main()
{
	printf("Program To Find,What Properties You Want in Your Metal:\n");
	char e,h,t;//e=elastricity,h=hardness,t=thermal behaviour
	printf("Do The Elasticity Matters\nType Y or N\n");
	scanf(" %c",&e);
	printf("Do The Hardness Matters\nType Y or N\n");
	scanf(" %c",&h);
	printf("Do The Thermal Behaviour Matters\nType Y or N\n");
	scanf(" %c",&t);
	if (e=='Y' && h=='N' && t=='N')
	{
		printf("The Best Metal is ");
		printf("Spring Steel or Phosphor Bronze or Beryllium Copper");
	}
	if (e=='N' && h=='Y' && t=='N')
	{
		printf("The Best Metal is ");
		printf("Tool Steel or Tungsten or Chromium or Titanium Alloy");
	}
	if (e=='N' && h=='N' && t=='Y')
	{
		printf("The Best Metal is ");
		printf("Copper or Aluminium or Silver");
	}
	if (e=='Y' && h=='Y' && t=='N')
	{
		printf("The Best Metal is ");
		printf("Titanium Alloy");
	}
	if (e=='Y' && h=='N' && t=='Y')
	{
		printf("The Best Metal is ");
		printf("Beryllium Copper");
	}
	if (e=='N' && h=='Y' && t=='Y')
	{
		printf("The Best Metal is ");
		printf("Inconel (Nickel-based superalloy)");
	}
	if (e=='Y' && h=='Y' && t=='Y')
	{
		printf("The Best Metal is ");
		printf("Maraging Steel");
	}
	if (e=='N' && h=='N' && t=='N')
	{
		printf("YOU BETTER USE PLASTIC");
	}
	return 0;
}
