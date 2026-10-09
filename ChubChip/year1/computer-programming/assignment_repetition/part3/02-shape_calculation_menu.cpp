//ChubChip

#include <stdio.h>
#include <conio.h>
#define PI 3.14

//Title
void PrintTitle()
{
	printf("ChubChip");
}

//Input
int getType()
{
	int t;
	printf("\n\n1Triangle\n2Retangle\n3Circle\n4Circumference\n");
	printf("  :");
	scanf("%d",&t);
	
	return t;
}
int getWidth()
{
	int width;
	printf("Input Width :");
	scanf("%d",&width);
	
	return width;
}
int getHeight()
{
	int height;
	printf("Input Height :");
	scanf("%d",&height);
	
	return height;
}
int getRadius()
{
	int radius;
	printf("Input Radius :");
	scanf("%d",&radius);
	
	return radius;
}

//Process
int How(int t)
{
	int sum = 0;
	int w;
	int h;
	int r;
	switch(t)
	{
		case 1://triangle
			w = getWidth();
			h = getHeight();
			sum = (w * h) / 2;
			break;
		case 2://rectangle
			w = getWidth();
			h = getHeight();
			sum = w * h;
			break;
		case 3://circle
			r = getRadius();
			sum = PI * r * r;
			break;
		case 4://circumference
			r = getRadius();
			sum = 2 * PI * r;
			break;
	}
	return sum;
}

void PrintOut(int sum)
{
	printf("The result is  :%d",sum);
}

int main()
{
	int type = 0;
	int sum;
	
	PrintTitle();
	
	do
	{
	type = getType();
	if (type > 4)
		continue;
	sum = How(type);
	PrintOut(sum);
	}while (type <= 4);
	
	getch();
	return 0;
}
