// 2. Write a program that input 2 values from user and find out Minimum.

#include<stdio.h>
#include<conio.h>

void main(){
    int x,y;
    clrscr();
    printf("\nEnter Number 1: ");
    scanf("%d",&x);
    printf("\nEnter Number 2: ");
    scanf("%d",&y);
    if(x<y){
        printf("Number 1: %d, is minimum", x);
    }
    else if(y<x)
	printf("Number 2: %d, is minimum", y);
    else
	printf("Numbers are equal");
    getch();
}