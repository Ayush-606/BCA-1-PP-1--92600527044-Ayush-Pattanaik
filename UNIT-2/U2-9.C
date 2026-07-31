// 9. Write a program Interchange the value of two numbers without using third variable. 

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    clrscr();
    printf("\n Enter Number 1: ");
    scanf("%d",&a);
    printf("\n Enter Number 2: ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNew Number 1: %d",a);
    printf("\nNew Number 2: %d",b);
    getch();

}