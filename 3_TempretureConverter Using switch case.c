#include <stdio.h>
int main()
{
	int choice;
	float c;
	float f;
	int a=1;
	while (a==1)
	{
	printf("Write 2 if want to Find Celsius\nWrite 3 if want to Find Fahrenheit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 2:
			printf("Enter the Value of Fahrenheit\n");
			scanf("%f",&f);
			c=(5.0/9.0)*(f-32.0);
			printf("The value of Celsius is %f\nWhile the value of Fahrenheit is %f\n",c,f);
			break ;
		case 3:
		    printf("Enter the Value of Celsius\n");
			scanf("%f",&c);
			f=((9.0/5.0)*c)+32.0;
			printf("The value of Fahrenheit is %f\nWhile the value of Celsius is %f\n",f,c);
			break ;
		default:
			printf("Error!\n");
	}
	printf("\nTo Continue press 1, To Exit press 0\n");
    scanf("%d", &a);
}
    
	return 0;
}
