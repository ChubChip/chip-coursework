//ChubChip

#include <stdio.h>
#include <conio.h>

void PrintTitle()
{
	printf("ChubChip\n\n");
}
int getMid()
{	
	int mid = 0;
	do
	{
		printf("Input midterm score (40):");
		scanf("%d",&mid);

	}while(mid > 40);
	return mid;
}
int getFinal()
{
	int final = 0;
	do
	{
		printf("Input final score (60):");
		scanf("%d",&final);
		
	}while(final > 60);
	return final;
}

void Grade(int total)
{
	if (total >= 80)
	{
	printf("Grade : A ");
	}
	else if (total >= 70)
	{
	printf("Grade : B ");
	}
	else if (total >= 60)
	{
	printf("Grade : C ");
	}
	else if (total >= 50)
	{
	printf("Grade : D ");
	}
	else
	{
	printf("Grade : E ");
	}
}
int main()
{
	int mid,final;
	int total;
	
	PrintTitle();
	
	mid = getMid();
	final = getFinal();
	
	total = mid + final;
	
	Grade(total);
	
	getch();
	return 0;
}
