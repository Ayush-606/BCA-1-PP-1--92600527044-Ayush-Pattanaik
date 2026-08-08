// 5. Write a program that input 2 number from user and find out number is equal or not. 

#include<stdio.h>
#include<conio.h>

void main(){
    int x,y;
    clrscr();
    printf("\nEnter Number 1: ");
    scanf("%d",&x);
    printf("\nEnter Number 2: ");
    scanf("%d",&y);
    if(x==y){
        printf("Equal Numbers");
    }
    else
        printf("Not Equal Numbers");
    getch();
}