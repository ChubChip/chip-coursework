//ChubChip

#include <stdio.h>
#include <conio.h>

int getTotal()
{
	int amount,price;
	int total = 0;
	
	do
	{
		printf("Input Amount  :");
		scanf("%d",&amount);
		
		if (amount <= 0)
				continue;	
			printf("Input Price   :");
			scanf("%d",&price);
		
		
		
		total = total + (amount * price);
	}while(amount != 0);
	printf("\nTotal  :%d\n",total);
	return total;
}

int getExpense(int total)
{
	int expense;
	do
	{
		
		printf("Input Expense  :");
		scanf("%d",&expense);
		if (total > expense)
		{
			printf("\tTry again\n");
		}
	}while(total > expense);
	
	return expense;
}

int Change(int total,int expense)
{
	int change;
	change = expense - total;
	return change;
}

void PrintOut(int total,int expense,int change)
{
	printf("\n\nTotal  :%d",total);
	printf("\nExpense  :%d",expense);
	printf("\nChange   :%d",change);
}

int main()
{	
	int total,expense,change;
	
	total = getTotal();
	expense = getExpense(total);
	
	change = Change(total,expense);
	
	PrintOut(total,expense,change);
	
	getch();
	return 0;
}
