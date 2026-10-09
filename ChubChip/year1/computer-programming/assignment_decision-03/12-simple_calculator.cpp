//ChubChip

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	int num1,num2;
	int ans;
	char ch[2];
	char ch1[2]="+" , ch2[2]="-" , ch3[2]="*" , ch4[2]="/" , ch5[2]="%";
	
	printf("Input Number1 :");
	scanf("%d",&num1);
	
	printf("Choose :");
	scanf("%s",&ch);
	
	printf("Input Number 2 :");
	scanf("%d",&num2);
	
	
	if (strcmp(ch,ch1) == 0)
	{
		ans = num1 + num2;
		printf("%d + %d = %d",num1,num2,ans);
	}
	else if (strcmp(ch,ch2) == 0)
	{
		ans = num1 - num2;
		printf("%d - %d = %d",num1,num2,ans);
	}
	else if (strcmp(ch,ch3) == 0)
	{
		ans = num1 * num2;
		printf("%d * %d = %d",num1,num2,ans);
	}
	else if (strcmp(ch,ch4) == 0)
	{
		ans = num1 / num2;
		printf("%d / %d = %d",num1,num2,ans);
	}
	else
	{
		ans = num1 % num2;
		printf("%d per %d = %d",num1,num2,ans);
	}
	getch();
	return 0;
}

