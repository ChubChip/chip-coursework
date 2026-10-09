//ChubChip

#include <stdio.h>
#include <conio.h>

//Print Title
void PrintTT()
{
	printf("ChubChip\n\n");
}

//Input
int InputPnt()
{
	int point;
	
	printf("Input point :");
	scanf("%d",&point);
	
	return point;
}
int InputProjct()
{
	int projct;
	
	printf("1Submid project   2Not submit project");
	printf("\nInput Project :");
	scanf("%d",&projct);
	
	return projct;
}

//Process+Output
void PrintOut(int point,int projct)
{
	int reslt;
	
	if (point > 70)
	{
		switch (projct)
		{
			case 1 :
				printf("\n\nPass-P");
				break;
			case 2 :
				printf("\n\nIncomplete-I");
				break;
		}
	}
	else
	{
		printf("\n\nFail-F");
	}
}

//Main
int main()
{
	int point,projct;
	
	PrintTT();
	
	point = InputPnt();
	projct = InputProjct();
	
	PrintOut(point,projct);
	
	getch();
	return 0;
}
