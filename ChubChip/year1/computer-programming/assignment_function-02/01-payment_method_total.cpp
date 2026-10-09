//ChubChip

#include <stdio.h>
#include <conio.h>

//Print Title
void PrintTT()
{
	printf("ChubChip\n\n");
}

//Input
int InputHow()
{
	int how;
	
	printf("1Cash   2Check\n");
	printf("How to pay :");
	scanf("%d",&how);
	
	return how;
}
int InputAmount()
{
	int amount;
	
	printf("Input Amount :");
	scanf("%d",&amount);
	
	return amount;
}

//Process
float DecisionHow(int how,int amount)
{
	float total;
	
	switch (how)
	{
		case 1:
			total = amount - (amount * 10 / 100);
			break;
		case 2:
			total = amount + (amount * 5 /100);
			break;
	}
	return total;
}

//Output
void PrintOut(int how,int amount,float total)
{
	switch (how)
	{
		case 1:
			printf("\n\nCash for pay");
			break;
		case 2:
			printf("\n\nCheck for pay");
			break;
	}
	printf("\nAmount :%d",amount);
	printf("\nTotal :%.2f",total);
}

//Main
int main()
{
	int how,amount;
	float total;
	
	PrintTT();
	
	how = InputHow();
	amount = InputAmount();
	
	total = DecisionHow(how,amount);
	
	PrintOut(how,amount,total);
	
	getch();
	return 0;
}
