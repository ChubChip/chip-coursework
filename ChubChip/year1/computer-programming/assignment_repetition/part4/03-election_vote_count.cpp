//ChubChip

#include <stdio.h>
#include <conio.h>

void PrintTitle()
{
	printf("ChubChip\n\n");
}
//InputScore
int getMidterm(int TotalMidterm)
{
	int midterm;
	
	do
	{
	printf("\nInput midterm score      :");
	scanf("%d",&midterm);
	}while(midterm > TotalMidterm);
	
	return midterm;
	
}
int getFinalterm(int TotalFinalterm)
{
	int final;
	
	do
	{
	printf("Input Final score      :");
	scanf("%d",&final);
	}while(final > TotalFinalterm);
	
	return final;	
}
//TotalScore
int getTotalMidterm()
{
	int TotalMidterm;
	
	do
	{
		printf("Input Total Midterm  :");
		scanf("%d",&TotalMidterm);
	}while(TotalMidterm <= 0);
	
	return TotalMidterm;
}
int getTotalFinal()
{
	int TotalFinal;
	
	do
	{
		printf("Input Total Final    :");
		scanf("%d",&TotalFinal);
	}while(TotalFinal <= 0);
	
	return TotalFinal;
}

int netScore(int totalMid,int totalFinal,int mid,int final)
{
	int netScore;
	
	netScore = (mid + final / totalMid + totalFinal) * 100 ;
	
	return netScore;
}

int Grade(int netScore)
{
	char grade;
	
	if (netScore >= 80)
	{
	printf("Grade : A ");
	}
	else if (netScore >= 70)
	{
	printf("Grade : B ");
	}
	else if (netScore >= 60)
	{
	printf("Grade : C ");
	}
	else if (netScore >= 50)
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
	int totalMid,totalFinal;
	int mid,final;
	int Score;

	PrintTitle();
	
	totalMid = getTotalMidterm();
	totalFinal = getTotalFinal();
	
	mid = getMidterm(totalMid);
	final = getFinalterm(totalFinal);
	
	Score = netScore(totalMid,totalFinal,mid,final);
	
	Grade(Score);
	
	getch();
	return 0;	
}
