// 4. Write a program that input value from user and find out number is even or odd. 

#include<stdio.h>
#include<conio.h>

void main(){
    int x;
    clrscr();
    printf("\nEnter Number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even Number");
    }
    else
        printf("Odd Number");
    getch();
}