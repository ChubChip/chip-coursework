//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{
	int num,sum;
	
	printf("Input Number  :");
	scanf("%d",&num);
	
	for(int i = 1; i <= 12; i++)
	{
		sum = num * i;
		printf("\n%d x %d = %d\n",num,i,sum);
	}
	getch();
	return 0;
}
