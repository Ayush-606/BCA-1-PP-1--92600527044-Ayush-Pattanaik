// 8. Write a program Interchange the value of two numbers using third variable. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int temp,x,y;
    clrscr();
    printf("\n Enter Number 1: ");
    scanf("%d",&x);
    printf("\n Enter Number 2: ");
    scanf("%d",&y);
    temp=x;
    x=y;
    y=temp;
    printf("\nNew Number 1: %d",x);
    printf("\nNew Number 2: %d",y);
    getch();

}