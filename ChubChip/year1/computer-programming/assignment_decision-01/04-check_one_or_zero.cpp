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
	
	ans = num1 + num2;
	
	if (ans >= 60)
	{
		printf("\t\t\tPass");
	}
	else
	{
		printf("\t\t\tFail");
	}
	getch ();
	return 0;
}
