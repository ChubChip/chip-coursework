//ChubChip

#include<stdio.h>
int main()
{	
	float cost;
	int profit;
	float sell;
	
	printf("Input Cost : ");
	scanf("%f",&cost);
	printf("Input Percent of Cost : ");
	scanf("%d",&profit);
	
	sell=cost+(cost*profit/100);
	
	printf("\nCost : %.2f\n",cost);
	printf("Sell : %.2f",sell);
	
}
