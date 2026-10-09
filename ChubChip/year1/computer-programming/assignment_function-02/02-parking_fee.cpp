//ChubChip

#include <stdio.h>
#include <conio.h>

//Print Title
void PrintTT()
{
	printf("ChubChip\n\n");
}

//Input
int InputVehcle()
{
	int vehcle;
	
	printf("1Car   2Bus   3Truck   4Other\n");
	printf("Which is type :");
	scanf("%d",&vehcle);
	
	return vehcle;
}
int InputHour()
{
	int hour;
	
	printf("Input Hour :");
	scanf("%d",&hour);
	
	return hour;
}

//Process
int ParkingFee(int hour,int vehcle)
{
	int park;
	
	switch (vehcle)
	{
		case 1:
			park = 10;
			break;
		case 2:
			park = 15;
			break;
		case 3:
			park = 20;
			break;
		case 4:
			park = 25;
			break;
	}
	park = park * hour;
	
	return park;
}

//Output
void PrintOut(int vehcle,int hour,int park)
{
	switch (vehcle)
	{
		case 1:
			printf("\n\nThe vehicle is Car");
			break;
		case 2:
			printf("\n\nThe vehicle is Bus");
			break;
		case 3:
			printf("\n\nThe vehicle is Truck");
			break;
		case 4:
			printf("\n\nThe vehicle is Other");
			break;
	}	
	printf("\nHour :%d",hour);
	printf("\nParking fee :%d",park);
}

//Main
int main()
{
	int hour,vehcle,park;
	
	PrintTT();
	
	vehcle = InputVehcle();
	hour = InputHour();
	
	park = ParkingFee(hour,vehcle);
	
	PrintOut(vehcle,hour,park);
	
	getch();
	return 0;
}
