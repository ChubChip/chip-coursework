//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{
	int sell,cost;
		
	printf("Input Sell :");
	scanf("%d",&sell);
	
	printf("Input Cost :");
	scanf("%d",&cost);
	
	if (sell > cost)
	{
		printf("pofit");
	}
	else 
	{
		printf("loss");
	}
	getch ();
	return 0;
}
