// 12. Write a program that input number and find out sum of digits. 

#include <stdio.h>
#include<conio.h>

void main(){
    int n, digit, sum = 0;
    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0){
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("Sum of digits = %d", sum);
    getch();
}