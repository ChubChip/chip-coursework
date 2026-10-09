//ChubChip

#include <stdio.h>
#include <conio.h>

int main ()
{	
	int num;
	int sum1 = 0;
	int sum2 = 0;
	
	for (int i = 0;i < 10; i++)
	{
		printf("Input Num :");
		scanf("%d",&num);
		
		if (num %2)
		{
			sum1 = sum1 + num;
		}
		else
		{
			sum2 = sum2 + num;
		}
	}
	printf("\n\nSum of  = %d",sum1);
	printf("\nSum of  = %d",sum2);
	
	getch ();
	return 0;
}
