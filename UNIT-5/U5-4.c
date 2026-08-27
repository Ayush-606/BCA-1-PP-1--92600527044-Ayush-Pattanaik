// 4. Write a program to find out Sum of digits using UDF.

#include<stdio.h>
#include<conio.h>

int sumd(int n);

int sumd(int n){
    int digit, sum = 0;
    while(n > 0){
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}

void main(){
    int x,sd;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    sd=sumd(x);
    printf("\nSum of Digits: %d",sd);
    getch();
}