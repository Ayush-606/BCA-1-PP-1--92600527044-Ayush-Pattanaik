// 9. Find out Number is Odd or Even

#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	clrscr();
	printf("\n Enter Number: ");
	scanf("%d",&n);
    
	if(n%2==0){
		printf("Even Number");
	}
	else
		printf("Odd Number");
	getch();
}