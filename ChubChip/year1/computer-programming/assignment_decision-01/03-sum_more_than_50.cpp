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
	
	if (ans > 50)
	{
		printf("\t\t\tmore 50");
	}
	getch ();
	return 0;
}
