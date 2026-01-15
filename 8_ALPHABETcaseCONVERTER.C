//PROGRAM TO CONVERT LOWER TO UPPER || UPPER TO LOWER CASE IN ALPHABET 
#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a Character: ");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')
	{
		printf("You Have Entered a Lower Case\nConverting it to Upper Case......\n");
		ch=ch-32;//CAN ALSO WRITE ('a'-'A') instead 32
		printf("The Result is:%c",ch);
	}
	else if (ch>='A' && ch<='Z')
	{
		printf("You Have Entered a Upper Case\nConverting it to Lower Case......\n");
		ch=ch+32;//CAN ALSO WRITE ('a'-'A') instead 32
		printf("The Result is:%c",ch);
	}
	else
	{
		printf("You Haven't Entered a Alphabet");
	}
	return 0;
}
