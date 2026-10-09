//ChubChip

#include<stdio.h>
int main()
{
	float Wide,Long,Hight1;
	float Radius,Hight2;
	
	float Pool,Can,num;
	
	//POOL
	printf("\tPool\n");
	
	printf("Input Wide : ");
	scanf("%f",&Wide);
	printf("Input Long : ");
	scanf("%f",&Long);
	printf("Input Hight : ");
	scanf("%f",&Hight1);
	
	//CAN
	printf("\tCan\n");
	
	printf("Input Radius : ");
	scanf("%f",&Radius);
	printf("Input Hight : ");
	scanf("%f",&Hight2);
	
	Pool=Wide*Long*Hight1;
	Can=3.14*Radius*radius*Hight2;
	num=Pool/Can;
	
	printf("\nVolume of Pool : %.2f\n",Pool);
	printf("\nVolume of Can : %.2f\n",Can);
	printf("\nNumber of Can : %.2f\n",num);
}
