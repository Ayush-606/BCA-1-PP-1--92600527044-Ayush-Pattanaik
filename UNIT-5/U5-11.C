// 11. Write a program to demonstrate use of macro

#include<stdio.h>
#include<conio.h>

#define sqr(x) ((x)*(x))

void main(){
    int n,ans;
    clrscr();
    printf("Enter Number: ");
    scanf("%d",&n);
    ans=sqr(n);
    printf("Square is: %d",ans);
    getch();
}