// 4. Input 3 values from user and find out its Average.

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n Enter Number 1: ");
	scanf("%d",&x);
	printf("\n Enter Number 2: ");
	scanf("%d",&y);
    printf("\n Enter Number 3: ");
	scanf("%d",&z);
    printf("\n Average is: %d ",(x+y+z)/3);
    getch();

}