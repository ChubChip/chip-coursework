//ChubChip

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char ch1[2];
	char ch2[2] = "A";
		
	printf("Input some character :");
	scanf("%c",&ch1);
	
	if (strcmp(ch1,ch2) == 0)
	{
		printf("\t\t\tIs A");
	}
	else 
	{
		printf("\t\t\tNot A");
	}
	getch ();
	return 0;
}
