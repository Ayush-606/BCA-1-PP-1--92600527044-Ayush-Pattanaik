// 2. 2 Values from user and Perform All Arithmetic Operations.

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	char ch;
	clrscr();
	printf("\n Enter Number 1: ");
	scanf("%d",&x);
	printf("\n Enter Number 2: ");
	scanf("%d",&y);
	printf("\n Enter Operation to be performed (+,-,*,/): ");
	fflush(stdin);
	scanf("%c",&ch);

	if (ch=='+'){
		printf("\n Sum is: %d ",x+y);
	}
	else if (ch=='-'){
		printf("\n Difference is: %d ",x-y);
	}
	else if (ch=='*'){
		printf("\n Multiplication is: %d ",x*y);
	}
	else if (ch=='/'){
		printf("\n Division is: %d ",x/y);
	}
	else
		printf("Invalid Operator");
	
	getch();

}