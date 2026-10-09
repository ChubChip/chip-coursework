//ChubChip

#include <stdio.h>
#include <conio.h>

//Title
void PrintTitle()
{
	printf("ChubChip");
}

//input
int getPayment()
{
	int payment;
	do
	{
	printf("\n\nInput Payment  :");
	scanf("%d",&payment);
	}while(payment <= 0);
	
	return payment;
}

//Process
int Sale(int payment)
{
	int sale;
	
	if(payment > 10000)
	{
		sale = payment * 10 / 100;
		
	}
	else if(payment > 5000)
	{
		sale = payment * 5 / 100;
	}
	else
	{
		sale = 0;
	}

	return sale;
}

//PrintOut
void PrintOut(int sale,int total)
{
	printf("\n\nSale   :%d",sale);
	printf("\n\nTotal  :%d",total);
}

//Main
int main()
{
	PrintTitle();
	
	int payment,total,sale;
	
	payment = getPayment();
	sale = Sale(payment);
	
	total = payment + sale;
	
	PrintOut(sale,total);
	
	getch();
	return 0;
}




