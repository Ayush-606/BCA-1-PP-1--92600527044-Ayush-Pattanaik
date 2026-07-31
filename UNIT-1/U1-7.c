// 7. Find largest out of three numbers

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
    
    if(x>y && x>z){
        printf("Number 1 is largest");
    }
    else if(y>z && y>x){
        printf("Number 2 is largest");
    }
    else{
        printf("Number 3 is largest");
    }
    getch();

}