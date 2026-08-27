// 3. Write a program to find out reverse of number using UDF.

#include<stdio.h>
#include<conio.h>

int revr(int n);

int revr(int n){
    int digit, reverse = 0;
    while(n > 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return reverse;
}

void main(){
    int x,reverse;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    reverse=revr(x);
    printf("\nReverse is: %d",reverse);
    getch();
}