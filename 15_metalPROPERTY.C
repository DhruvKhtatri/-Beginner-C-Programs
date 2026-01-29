// program to find properties of metal
#include <stdio.h>
int main()
{
	int metal;
	float length;
	float breadth;
	float height;
	float V,W;
	int i=1;
	while (i==1)
{

	printf("Data of Available Metals Listed below\n");
	printf("1.Stainless Steel\n2.Copper\n3.Aluminium\n4.Cast Iron\n5.Zinc\n");
	printf("Write number Of Metal Deatail You want to Find\n");
	scanf(" %d",&metal);
	printf("Now enter the Deatil of Metal You have selected\n");
	printf("Length:(CM)\n");
	scanf(" %f",&length);
	printf("Breadth:(CM)\n");
	scanf(" %f",&breadth);
	printf("Height:(CM)\n");
	scanf(" %f",&height);
	switch(metal)
	{
		case 1:
			printf("You selected Stainless Steel\n");
			V=length*breadth*height;
			W=7.98*V;
			printf("Volume of the Metal is %f CMcube\n",V);
			printf("Weight of the Metal is %f Grams\n",W);
			printf("1.Excellent corrosion resistance\n");
			printf("2.High strength and toughness\n");
			printf("3.Good heat and oxidation resistance\n");
			break;
		case 2:
			printf("You selected Copper\n");
			V=length*breadth*height;
			W=8.96*V;
			printf("Volume of the Metal is %f CMcube\n",V);
			printf("Weight of the Metal is %f Grams\n",W);
			printf("1.Very high electrical and thermal conductivity\n");
			printf("2.Excellent ductility and formability\n");
			printf("3.Good corrosion resistance\n");
			break;
		case 3:
			printf("You selected Aluminium\n");
			V=length*breadth*height;
			W=2.7*V;
			printf("Volume of the Metal is %f CMcube\n",V);
			printf("Weight of the Metal is %f Grams\n",W);
			printf("1.Low density and lightweight\n");
			printf("2.Good corrosion resistance due to oxide layer\n");
			printf("3.High thermal conductivity\n");
			break;
		case 4:
			printf("You selected Cast Iron\n");
			V=length*breadth*height;
			W=7.2*V;
			printf("Volume of the Metal is %f CMcube\n",V);
			printf("Weight of the Metal is %f Grams\n",W);
			printf("1.High compressive strength\n");
			printf("2.Excellent vibration damping capacity\n");
			printf("3.Good castability for complex shapes\n");
			break;
		case 5:
			printf("You selected Zinc\n");
			V=length*breadth*height;
			W=7.14*V;
			printf("Volume of the Metal is %f CMcube\n",V);
			printf("Weight of the Metal is %f Grams\n",W);
			printf("1.Excellent corrosion protection\n");
			printf("2.Low melting point suitable for die casting\n");
			printf("3.Good dimensional accuracy in cast components\n");
			break;
		default:
            printf("Invalid metal selection\n");
            break;

	}
	printf("Enter 1 to Continue and 0 to Exit");
	scanf(" %d",&i);
	}
	return 0; 
}
