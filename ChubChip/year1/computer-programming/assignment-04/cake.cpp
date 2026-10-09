//ChubChip

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{	
	int piece,cake,recipe,NumPiece,NumRemain;
	float result;

	printf("\n\n\tInput Peice of Cake :");
	scanf("%d",&piece);
	
	result = (float)piece /8;
	cake = ceil(result);
	recipe = cake *2;
	NumPiece = cake *8;
	NumRemain = NumPiece - piece;
	
	printf("\nNumber of Recipe : %d",recipe);
	printf("\nNumber of Cake : %d",cake);
	printf("\nNumber of Piece : %d",NumPiece);
	printf("\nNumber of Remain : %d",NumRemain);
	
	getch();
	return 0;
}

