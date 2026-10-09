//ChubChip

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{	
	char ch1[2],ch2[2],ch3[2];
	int ch4,ch5,ch6;
	int ans;
	
	char A[] = "A";
	char B[] = "B";
	char C[] = "C";
	
	printf("Input Char1 :");
	scanf("%s",&ch1);
	
	printf("Input Char2 :");
	scanf("%s",&ch2);
	
	printf("Input Char3 :");
	scanf("%s",&ch3);
	
	if (strcmp(ch1 , A) == 0)
	{
		ch4 = 10;
	}
	if (strcmp(ch2 , B) == 0)
	{
		ch5 = 20;
	}
	if (strcmp(ch3 , C) == 0)
	{
		ch6 = 30;
	}
	
	ans = ch4 + ch5 + ch6;
	
	printf("Answer :%d",ans);
	
	getch();
	return 0;
}
