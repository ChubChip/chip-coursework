//ChubChip

#include<stdio.h>
#include<conio.h>

int main()
{
	float wide1,long1,hight1;
	float wide2,long2,hight2;
	
	float area1,area2,difference;
	
	//SQUARE 1
	printf("\tSquare1\n");
	
	printf("Input Wide : ");
	scanf("%f",&wide1);
	
	printf("Input Long : ");
	scanf("%f",&long1);
	
	printf("Input Hight : ");
	scanf("%f",&hight1);
	
	//SQUARE 2
	printf("\tSquare2\n");
	
	printf("Input Wide : ");
	scanf("%f",&wide2);
	
	printf("Input Long : ");
	scanf("%f",&long2);
	
	printf("Input Hight : ");
	scanf("%f",&hight2);
	
	//RESULT
	area1=wide1*long1*hight1;
	area2=wide2*long2*hight2;
	
	//DECISION
	if (area1 > area2){
		difference=area1-area2;
	}else{
		difference=area2-area1;
	}
	
	//OUTPUT
	printf("\n\nArea Square 1 : %.2f\n",area1);
	printf("Area Square 2 : %.2f\n",area2);
	printf("Difference : %.2f",difference);
}
