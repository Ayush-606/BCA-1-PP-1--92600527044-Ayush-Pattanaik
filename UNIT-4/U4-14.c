// 14. Write a program that input number and find out number is palindrome or not. 

#include <stdio.h>
#include<conio.h>

void main(){
    int n, original, digit, reverse = 0;
    clrscr();
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;
    while(n > 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if(original == reverse)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");
    getch();
}