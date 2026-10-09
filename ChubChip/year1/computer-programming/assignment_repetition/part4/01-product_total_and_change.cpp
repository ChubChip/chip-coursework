//ChubChip

#include <stdio.h>
#include <conio.h>

//Title
void PrintOut()
{
	printf("ChubChip\n\n");
}

//Input
int getAmount()
{
	int amount;
	do
	{
	printf("Input Amount  :");
	scanf("%d",&amount);
	}while(amount <= 0);
	return amount;
}
int getPrice()
{
	int price;
	do
	{
	printf("Input Price  :");
	scanf("%d",&price);
	}while(price <= 0);
	return price;
}
int getExpense(int total)
{
	int expense;
	do
	{
	printf("\nInput Expense  :");
	scanf("%d",&expense);
	}while(expense < total);
	return expense;
}

//Process
int Total(int amount,int price)
{
	int total;
	total = amount* price;
	return total;
}
int Change(int expense,int total)
{
	int change;
	change = expense - total;
	return change;
}

//Output
void PrintOut1(int total)
{
	printf("\n\nTotal  :%d",total);
}
void PrintOut2(int change)
{
	printf("\n\nChange :%d",change);
}

int main()
{
	int amount,price,total;
	int expense,change;
	
	PrintOut();
	
	amount = getAmount();
	price = getPrice();
	
	total = Total(amount,price);
	PrintOut1(total);
	
	expense = getExpense(total);
	
	change = Change(expense,total);
	
	PrintOut2(change);
	
	getch();
	return 0;
}






