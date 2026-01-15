#include <stdio.h>
int main()
{
	//Program To Find The Letter Entered is Uppercase or Lower Case
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')
	{
		printf("The Character Entered Is LowerCase\n");
	}
	else if (ch>='A' && ch<='Z')
	{
		printf("The Character Entered Is UpperCase\n");
	}
	else
	{
		printf("You didn't Entered an Alphabet\n");
	}
	return 0;
}
