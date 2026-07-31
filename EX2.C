#include<stdio.h>
#include<conio.h>

void main()
{
	int i, *p;
	clrscr();

	for(i=0;i<(i+5);i++)
	{
		printf("Enter the Number :");
		scanf("%d",p);
	}

	for(i=0;i<(i+5);i++)
	{
		printf("Elements are : %d\n",*p);
	}
	getch();
}