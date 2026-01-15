//PROGRAM TO FIND THE ENTERED CHARACTER IS VOWEL OR CONSONANT
#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any Alphabet of Your choice: ");
	scanf(" %c",&ch);
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
	ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("Entered Alphabet is a VOWEL");
	}
	else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
	{
		printf("Entered Alphabet is a CONSONANT");
	}
	else 
	{
		printf("You Haven't Entered a Alphabet");
	}
	return 0;
}
