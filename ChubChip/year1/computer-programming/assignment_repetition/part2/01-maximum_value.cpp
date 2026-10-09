//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{
	int num,max;
	int i = 0;
		
	while (i < 10)
	{
		printf("Input positive number :");
		scanf("%d",&num);
	
		if (num < 0)
		{
			printf("\tPlease try again\n");
			continue;
		}
		if(max < num)
		{
			max = num;
		}
			i++;
	}
	printf("\n\nMax Number :%d",max);
	
	getch();
	return 0;
}
