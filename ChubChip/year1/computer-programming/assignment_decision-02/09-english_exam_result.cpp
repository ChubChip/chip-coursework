//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{	
	int point;
	
	printf("Input Point of English :");
	scanf("%d",&point);
	
	if (point >= 850)
	{
		printf("ผ่านยอดเยี่ยม");
	}
	else if (point >= 650)
	{
		printf("ผ่าน");
	}
	else
	{
		printf("ไม่ผ่าน");
	}
	getch ();
	return 0;
}
