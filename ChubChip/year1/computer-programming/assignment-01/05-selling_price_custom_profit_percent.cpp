//ChubChip

#include<stdio.h>
int main()
{	
	float cost;
	float total;
	
	printf("Input cost : ");
	scanf("%f",&cost);
	
	total=cost+(cost/2);
	
	printf("\nCost : %.2f",cost);
	printf("\nTotal : %.2f",total);
	
}
