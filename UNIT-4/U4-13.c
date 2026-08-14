// 13. Write a program that input number and find out reverse of that number. 

#include <stdio.h>
#include<conio.h>

void main(){
    int n, digit, reverse = 0;
    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("Reverse = %d", reverse);
    getch();
}