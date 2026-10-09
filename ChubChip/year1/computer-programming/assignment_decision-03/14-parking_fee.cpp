//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{	
	int hour,type,total;
	
	printf("Input Hour :");
	scanf("%d",&hour);
	
	printf("1Car 2Bus 3Truck 4Other :");
	scanf("%d",&type);
	
	
	if (type == 1)
	{
		total = hour * 10;
		printf("Total :%d",total);
	}
	else if (type == 2)
	{
		total = hour * 15;
		printf("Total :%d",total);
	}
	else if (type == 3)
	{
		total = hour * 20;
		printf("Total :%d",total);
	}
	else 
	{
		total = hour * 5;
		printf("Total :%d",total);
	}
	getch ();
	return 0;
}
