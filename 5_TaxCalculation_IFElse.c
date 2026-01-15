#include <stdio.h>
int main()
{
	float salary,tax;
	printf("Enter Your Salary:");
	scanf("%f",&salary);
	if (salary<=0.0)
	{
	    printf("You are in Debt Man,Govt isn't Providing Money");
	}
	else if (salary<=400000.0)
	{
		printf("You Will Not Be TAXED\n");
		printf("Might be Happiest Day of your life");
	}
	else if (salary>400000.0 && salary<=800000.0)
	{
		printf("You Will Be TAXED at 5 Percent\n");
		tax=(5*salary)/100;
		printf("Your Tax Will Be %.2f\n",tax);
		printf("Sorry For your Loss");
	}
	else if (salary>800000.0 && salary<=1200000.0)
	{
		printf("You Will Be TAXED at 10 Percent\n");
		tax=(10*salary)/100;
		printf("Your Tax Will Be %.2f\n",tax);
		printf("Sorry For your Loss,Dil se Bura Laga");
	}
	else if (salary>1200000.0 && salary<=1600000.0)
	{
		printf("You Will Be TAXED at 15 Percent\n");
		tax=(15*salary)/100;
		printf("Your Tax Will Be %.2f\n",tax);
		printf("Your Whole Life is gone Today,My Condolences");
	}
	else if (salary>1600000.0 && salary<=2000000.0)
	{
		printf("You Will Be TAXED at 20 Percent\n");
		tax=(20*salary)/100;
		printf("Your Tax Will Be %.2f\n",tax);
		printf("May God Have Mercy On you,My Condolences");
	}
	else if (salary>2000000.0 && salary<=2400000.0)
	{
		printf("You Will Be TAXED at 25 Percent\n");
		tax=(25*salary)/100;
		printf("Your Tax Will Be %.2f\n",tax);
		printf("Everything will Be Alright,Take No Tension");
	}
	else if (salary>2400000.0)
	{
		printf("You Will Be TAXED at 30 Percent\n");
		tax=(30*salary)/100;
		printf("Your Tax Will Be %.2f\n",tax);
		printf("No Comment For Your Situation");
	}
	else
	{
		printf("Invalid Salary");
	}
	return 0;
}
