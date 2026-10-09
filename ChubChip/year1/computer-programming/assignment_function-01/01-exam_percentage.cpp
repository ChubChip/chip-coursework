//ChubChip
#include <stdio.h>
#include <conio.h>

//Print Title
void printTT()
{
	printf("ChubChip\n\n");
}


//Input
float InputP()
{
	float P;
	
	printf("Input Point:");
	scanf("%f",&P);

	return P;
}
float InputTp()
{
	float Tp;
	
	printf("Input Total point:");
	scanf("%f",&Tp);
	
	return Tp;
}

//Process
float Percent (float P ,float Tp)
{
	float per;
	per = 100 * P / Tp;

	return per;
}

//Output
void PrintOut(float point,float Tpoint,float per)
{	
	printf("\nPoint:%.2f",point);
	printf("\nTotal point:%.2f",Tpoint);
	printf("\nPersent of point:%.2f",per);
}
//Main
int main()
{	
	float point,Tpoint,per;
	
	printTT();

	point = InputP();
	Tpoint = InputTp();
	
	per = Percent(point,Tpoint);
	
	PrintOut(point,Tpoint,per);
	
	getch();
	return 0;
}
