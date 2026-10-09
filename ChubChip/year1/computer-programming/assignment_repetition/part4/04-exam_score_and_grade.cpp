//ChubChip

#include <stdio.h>
#include <conio.h>

//Title
void PrintTitle()
{
	printf("ChubChip");
}

int getTotal()
{
	int total;
	printf("\n\nInput Total  :");
	scanf("%d",&total);
	return total;
}

void PrintOut(int a,int b,int c,int d)
{
	printf("\nNumber 1  :%d\n",a);
	printf("Number 2  :%d\n",b);
	printf("Number 3  :%d\n",c);
	printf("Broked  :%d\n",d);
}

int Process(int total)
{
	int num;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	for(int i = 0;i < total;i++)
	{
		printf("Input Number  :");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			default:
				d++;
		}
	}
	PrintOut(a,b,c,d);
}

int main()
{
	int total;
	PrintTitle();
	
	total = getTotal();
	Process(total);
	
	getch();
	return 0;
}
