//ChubChip

#include <stdio.h>
#include <conio.h>

int main ()
{
	printf("ChubChip\n\n");
	
	int score;
	int i = 0;
	
	for (int i = 0;i < 10; i++)
	{
		printf("\n\nInput Score :");
		scanf("%d",&score);
		
		if (score >= 80)
		{
		printf("Grade : A ");
		}
		else if (score >= 70)
		{
		printf("Grade : B ");
		}
		else if (score >= 60)
		{
		printf("Grade : C ");
		}
		else if (score >= 50)
		{
		printf("Grade : D ");
		}
		else
		{
		printf("Grade : E ");
		}
	}
	getch ();
	return 0;	
}
