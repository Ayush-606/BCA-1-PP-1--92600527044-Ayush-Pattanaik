// 1. Write a program that input 2 values from user and find out Maximum.

#include<stdio.h>
#include<conio.h>

void main(){
    int x,y;
    clrscr();
    printf("\nEnter Number 1: ");
    scanf("%d",&x);
    printf("\nEnter Number 2: ");
    scanf("%d",&y);
    if(x!=y){
        if(x>y){
	    printf("Number 1: %d, is maximum", x);
        }
        else
	    printf("Number 2: %d, is maximum", y);
    }
    else{
	printf("Both are equal");
    }
    getch();
}