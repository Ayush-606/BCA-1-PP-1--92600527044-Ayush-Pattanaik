// 5. Write a program to find out Number is Palindrome or not using UDF.

#include<stdio.h>
#include<conio.h>

int pal(int n);

int pal(int n){
    int original, digit, reverse = 0;
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
    return 0;
}

void main(){
    int x;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    pal(x);
    getch();
}