//ChubChip

#include <stdio.h>
#include <conio.h>

int main()
{
	int Register,Dormitory,Personal,Activity,Uniform,ExpensesYear;
	int Entrance,Computer,Motorcycle,Phone,Totalyear;
	int Register2,Dormitory2,Personal2,Activity2,Uniform2,ExpensesYear2;
	
	int TotalExpenses;
	
	printf("===========================================================================\n");
	printf("\t\t\t\tINPUT\n");
	printf("===========================================================================\n");
	
	printf("Registration fee per term : ");
	scanf("%d",&Register);
	
	printf("Dormitory rent : ");
	scanf("%d",&Dormitory);
	
	printf("Personal expenses : ");
	scanf("%d",&Personal);
	
	printf("Books and Activities : ");
	scanf("%d",&Activity);
	
	printf("Student uniform fee : ");
	scanf("%d",&Uniform);
	
	printf("Entrance fee : ");
	scanf("%d",&Entrance);
	
	printf("Computer : ");
	scanf("%d",&Computer);
	
	printf("Motorcycle : ");
	scanf("%d",&Motorcycle);
	
	printf("Telephone : ");
	scanf("%d",&Phone);
	
	Register2=Register*2;
	Dormitory2=Dormitory*12;
	Personal2=Personal*12;
	Activity2=Activity*2;
	
	Totalyear=Register2+Dormitory2+Personal2+Activity2+Uniform;
	TotalExpenses=Entrance+Computer+Motorcycle+Phone+Totalyear*4;

	
	printf("\n===========================================================================\n");
	printf("\t\t\t\tEXPENSES");
	printf("\n===========================================================================\n");
	
	printf("%25s\t%20s\t\t%s\n","List","Price Per","Total");
	printf("---------------------------------------------------------------------------\n");
	
	printf("%-45s\t%5d\t\t%5d\n","Registration fee per term",Register,Register2);
	printf("%-45s\t%5d\t\t%5d\n","Dormitory rent",Dormitory,Dormitory2);
	printf("%-45s\t%5d\t\t%5d\n","Personal expenses",Personal,Personal2);
	printf("%-45s\t%5d\t\t%5d\n","Books and Activities",Activity,Activity2);
	printf("%-45s\t%5d\t\t%5d\n","Student uniform fee",Uniform,Uniform);
	
	printf("\n---------------------------------------------------------------------------\n");
	printf("%40s""%10d","Total for year",Totalyear);
	printf("\n---------------------------------------------------------------------------\n");
	
	printf("%-45s\t%5d\t\t%5d\n","Entrance fee",Entrance,Entrance);
	printf("%-45s\t%5d\t\t%5d\n","Computer",Computer,Computer);
	printf("%-45s\t%5d\t\t%5d\n","Motorcycle",Motorcycle,Motorcycle);
	printf("%-45s\t%5d\t\t%5d\n","Telephone",Phone,Phone);
	
	printf("\n----------------------------------------------------------------------------\n");
	printf("%40s""%10d","Total Expenses",TotalExpenses);
	printf("\n----------------------------------------------------------------------------\n");
	
	getch();
	return 0;
}
