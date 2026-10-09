//ChubChip

#include <stdio.h>
#include <conio.h>

int main ()
{
	printf("ChubChip\n\n");
	
	int sum = 0;
	int num;
	
	for (int i = 0;i < 10; i++)
	{
		printf("Input Number :");
		scanf("%d",&num);
		
		sum = sum + num;
	}
	printf("\n\nSum =%d",sum);
	sum = sum / 10;
	printf("\n\nAverage =%d",sum);
	
	getch ();
	return 0;
}
