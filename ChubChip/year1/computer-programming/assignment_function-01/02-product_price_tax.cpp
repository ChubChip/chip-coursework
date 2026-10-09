//ChubChip
#include <stdio.h>
#include <conio.h>

//Print Title
void PrintTT()
{
	printf("ChubChip\n\n");
}

//Input
int InputQ()
{
	int Q;
	
	printf("Input Quantity:");
	scanf("%d",&Q);

	return Q;
}
float InputP()
{
	float P;
	
	printf("Input Price:");
	scanf("%f",&P);
	
	return P;
}

//Process
int Amount(int q,float p)
{
	int amount;
	
	amount = q * p;
	
	return amount;
}
float Tax(float amount)
{
	float tax;
	
	tax = amount * 7 / 100;
	
	return tax;
	
}
float Total(float amount,float tax)
{
	float total;
	
	total = amount + tax;
	
	return total; 
}

//Output
void PrintOut(int amount,float tax,float total)
{
	printf("\nAmount =%d",amount);
	printf("\nTax =%.2f",tax);
	printf("\nTotal =%.2f",total);
}

//Main
int main()
{
	int qntity;
	float price;
	int amount;
	float tax,total;
	
	PrintTT();
	
	qntity = InputQ();
	price = InputP();
	
	amount = Amount(qntity,price);
	
	tax = Tax(amount);   
	total = Total(amount,tax);
	
	PrintOut(amount,tax,total);
	
	getch();
	return 0;
}
