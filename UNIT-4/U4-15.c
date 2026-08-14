// 15. Write a program that input number and find out number is Armstrong or not. 

#include <stdio.h>
#include<conio.h>

void main(){
    int n, original, digit, sum = 0;
    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    while(n > 0){
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if(original == sum)
        printf("Number is Armstrong");
    else
        printf("Number is not Armstrong");

    getch();
}