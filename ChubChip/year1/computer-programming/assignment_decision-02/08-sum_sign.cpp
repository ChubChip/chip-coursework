//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{	
	int num1,num2;
	int ans;
	
	printf("Input Number1 :");
	scanf("%d",&num1);
	
	printf("Input Number 2 :");
	scanf("%d",&num2);

	ans = num1 + num2;
	
	if (ans > 0)
	{
		printf("\nPositive");
	}
	else if (ans < 0)
	{
		printf("\nNegative");
	}
	else
	{
		printf("\nZero");
	}
	getch ();
	return 0;
}
