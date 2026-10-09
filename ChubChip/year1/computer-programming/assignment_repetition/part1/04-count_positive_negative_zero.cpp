//ChubChip

#include <stdio.h>
#include <conio.h>

int main ()
{	
	int num;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	
	for (int i = 0;i < 10; i++)
	{
		printf("Input Num :");
		scanf("%d",&num);
		
		if (num > 0)        //Positive
		{
			j++;
		}
		else if (num < 0)   //Negative
		{
			k++;
		}
		else                //Zero
		{
			l++;
		}
	}
	printf("\n\nPositive Number :%d",j);
	printf("\nNegative Number :%d",k);
	printf("\nZero Number :%d",l);
	
	getch ();
	return 0;
}
