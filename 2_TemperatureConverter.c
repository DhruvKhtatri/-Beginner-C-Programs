#include <stdio.h>
int main()
{
	int a=1;
	while (a=1)
{
  printf("Celcius to Farenhite or vice versa  Program\n");
 float c;
 float f;
 printf("Write value of Celsius If You have or Enter 0 If you Want to find It out\n");
 scanf("%f",&c);
 printf("Write value of Farenhite If You have or Enter 0 If you Want to find It out\n");
 scanf("%f",&f);
 if (c==0)
 {
 	c=(5.0/9.0)*(f-32);
 	printf("The Value of Celcius is %f",c);
 }	
 else if (f==0)
 {
 	f=((9.0/5.0)*c)+32;
 	printf("The Value of Farenhite is %f",f);
 }
 else
 {
 	printf("Data is not Available");
 }
}
 return 0;
}
