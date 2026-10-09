//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{
	int num , result;
	
	for (int i = 0 ; i <10 ; i++ )
	{
		printf("Input Number : ");
		scanf("%d",&num);
		
		result = result + num ;
	}
	printf("\n\nResult = %d",result);
	
	result = result / 10 ;
	
	printf("\nAverage = %d",result);
	
	getch();
	return 0;
}
