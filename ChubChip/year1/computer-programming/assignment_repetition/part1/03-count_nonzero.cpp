//ChubChip

#include <stdio.h>
#include <conio.h>

int main ()
{	
	int num;
	int i,j = 0;
	
	for (int i = 0;i < 10; i++)
	{
		printf("Input Num :");
		scanf("%d",&num);
		
		if (num != 0)
		{
			j++;
		}
	}
	printf("\n\nNum not be Zero = %d",j);
	
	getch ();
	return 0;
}
