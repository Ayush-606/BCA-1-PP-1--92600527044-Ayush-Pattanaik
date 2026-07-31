// 10. Find out sum of digits of a given number.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,x,y;
    clrscr();
    printf("\n Enter Two Digit Number: ");
    scanf("%d",&n);
    x=n%10;
    y=n/10;
    printf("Sum Of Digits is: %d",x+y);
    getch();

}
