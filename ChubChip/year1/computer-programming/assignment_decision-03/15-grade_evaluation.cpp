//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{	
	int point,project;
	
	printf("Input Point :");
	scanf("%d",&point);
	
	printf("1Project submitted  2Project not submitted :");
	scanf("%d",&project);
	
	if (point >= 70)
	{
		if (project == 1)
		{
			printf("\nPass-P");
		}
		else if (project == 2)
		{
			printf("\nIncomplete-I");
		}
	}
	else 
	{
		printf("\nFail-F");
	}
	getch ();
	return 0;
}
