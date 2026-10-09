//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{
	int hour,min,sec;
	
	do
	{
		printf("Input Hour :");
		scanf("%d",&hour);
		if(hour > 24)
			continue;
			
		printf("Input Minute :");
		scanf("%d",&min);
		if(min > 60)
			continue;
	
		printf("Input Second :");
		scanf("%d",&sec);
		if(sec > 60)
			continue;
	}while(hour > 24 or min > 60 or sec > 60);
	printf("\n\n%d:%d:%d",hour,min,sec);
	
	getch();
	return 0;
}
