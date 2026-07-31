//array of size 10, inpute values and print the array and search element.

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10], i=0, Flag=0, j;
	clrscr();
	printf("Enter the element : \n");

	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\n the element of arrays are : \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}

	printf("\nEnter the element of serch : ");
	scanf("%d",&j);

	for(i=0;i<10;i++)
	{
		if(a[i]==j)
		{
			Flag = 1;
			break;
		}
	}

	if(Flag == 1)
	{
		printf("Search elements is found at index %d",i);
	}
	else
	{
		printf("Search elements is not found.");
	}
	getch();
}