#include <stdio.h>
int main()
{
	char ch;
	int i=1;
	while(i==1)
	{
	
	printf("Enter any Character:");
	scanf(" %c",&ch);
	
	if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("Entered Character is Alphabet\n");
	}
	
	else if (ch>='0' && ch<='9')
	{
		printf("Entered Character is Number\n");
	}
	
	else 
	{
		printf("Entered Character is Special Character\n");
	}
	
	printf("Enter 1 to Continue0 to Exit");
	scanf("%d",&i);
	}
	return 0;
}
