//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{	
	int num1,num2;
	int ans;
	
	printf("Input Number 1 :");
	scanf("%d",&num1);
	
	printf("Input Number 2 :");
	scanf("%d",&num2);
	
	if (num2 == 0)
	{
		printf("Cannot devide by zero");
	}
	
	ans = num1 / num2;
	
	printf("Answer :");
	
	getch ();
	return 0;
}
