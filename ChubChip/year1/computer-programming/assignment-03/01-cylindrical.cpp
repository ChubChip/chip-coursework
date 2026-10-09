//ChubChip

#include<stdio.h>
int main()
{
	float radius,hight,volume;
	
	printf("Input Radius : ");
	scanf("%f",&radius);
	
	printf("Input Hight : ");
	scanf("%f",&hight);
	
	volume=3.14*radius*radius*hight;
	
	printf("Volume : %.2f",volume);
}
