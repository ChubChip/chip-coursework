//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{	
	int pay,total;
	
	printf("Input price :");
	scanf("%d",&total);
	
	printf("1Cash 2Check :");
	scanf("%d",&pay);
	
	if (pay == 1)
	{
		total = total - (total * 10 / 100);
		printf("Total :%d",total);
	}
	else
	{
		total = total + (total * 5 / 100);
		printf("Total :%d",total);
	}
	getch ();
	return 0;
}
