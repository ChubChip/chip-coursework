//ChubChip

#include <stdio.h>
#include <conio.h>

//Print Title
void PrintTT()
{
	printf("ChubChip\n\n");
}

//Input
int InputRegist()
{
	int regist;
	
	printf("Input Registration fee :");
	scanf("%d",&regist);
	
	return regist;
}
int InputDormtry()
{
	int dormtry;
	
	printf("Input Domitory rent :");
	scanf("%d",&dormtry);
	
	return dormtry;
}
int InputPersnal()
{
	int persnal;
	
	printf("Input Personal expenses :");
	scanf("%d",&persnal);
	
	return persnal;
}

//Process
int Regist(int r)
{
	r = r * 2;
	
	return r;
}
int Dormtry(int d)
{
	d = d *12;
	
	return d;
}
int Persnal(int p)
{
	p = p * 12;
	
	return p;
}
int Total(int r,int d,int p)
{
	int total;
	
	total = r + d + p;
	
	return total;
}

//Output
void PrintOut(int r,int d,int p,int t)
{
	printf("\n\nRegistration fee :%d",r);
	printf("\nDomitory rent :%d",d);
	printf("\nPersonal expenses :%d",p);
	printf("\nTotal ecpenses :%d",t);
}
int main()
{
	int regist,dormtry,persnal;
	int total;
	
	PrintTT();
	
	regist = InputRegist();
	dormtry = InputDormtry();
	persnal = InputPersnal();
	
	
	regist = Regist(regist);
	dormtry = Dormtry(dormtry);
	persnal = Persnal(persnal);
	
	
	total = Total(regist,dormtry,persnal);
	
	
	PrintOut(regist,dormtry,persnal,total);
	
	getch();
	return 0;
}
