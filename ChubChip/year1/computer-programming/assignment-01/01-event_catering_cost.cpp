//ChubChip
  
#include<stdio.h>
int main()
{
	int table;
	int price;
	int total;
	
	printf("Input Table : ");
	scanf("%d",&table);
	printf("Input Price : ");
	scanf("%d",&price);
	
	total=table*price;
	
	printf("\n Table :%d\n",table);
	printf("Price :%d\n",price);
	printf("Total :%d\n",total);

}
