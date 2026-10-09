//ChubChip

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char ch[2];
	char A[2] = "A";
	char E[2] = "E";
	char I[2] = "I";
	char O[2] = "O";
	char U[2] = "U";
	char N[2] = "N";
	char n[2] = "n";
	int i = 0;
	
	do{
		printf("Input some Character :");
		scanf("%s",&ch);
		
		if(strcmp(ch,A) == 0)
		{
			i++;
		}
		else if(strcmp(ch,E) == 0)
		{
			i++;
		}
		else if(strcmp(ch,I) == 0)
		{
			i++;
		}
		else if(strcmp(ch,O) == 0)
		{
			i++;
		}
		else if(strcmp(ch,U) == 0)
		{
			i++;
		}
		else
		{
			
		}
	}while ((strcmp(ch,N) != 0) and (strcmp(ch,n) != 0));
	
	printf("Number of A E I O U  :%d",i);
	
	getch();
	return 0;
}
