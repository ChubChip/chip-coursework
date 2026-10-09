//ChubChip

#include <stdio.h>
#include <conio.h>

void PrintTitle()
{
	printf("ChubChip\n\n");
}

//Menu : + - * /
int getMenu()
{
	int menu;
	
	printf("\t1 + \n\t2 - \n\t3 * \n\t4 /");
	printf("\nChoose the menu   :");
	scanf("%d",&menu);
	
	return menu;
}

//Input Number
int getNum1()
{
	int num;
	
	printf("Input Number   :");
	scanf("%d",&num);
	
	return num;
}
int getNum2()
{
	int num;
	
	printf("Input Number   :");
	scanf("%d",&num);
	
	return num;
}

//Process
int Process(int menu,int num1,int num2)
{
	int total;
	switch(menu)
	{
		case 1:
			total = num1 + num2;
			break;
		case 2:
			total = num1 - num2;
			break;
		case 3:
			total = num1 * num2;
			break;
		case 4:
			total = num1 / num2;
	}
	return total;
}

void PrintOut(int total)
{
	printf("The total is %d",total);
}

int main()
{
	int num1,num2;
	int menu,total;
	
	PrintTitle();
	
	menu = getMenu();
	
	num1 = getNum1();
	num2 = getNum2();
	
	total = Process(menu,num1,num2);
	
	PrintOut(total);
	
	getch();
	return 0;
}
