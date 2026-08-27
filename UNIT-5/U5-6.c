// 6. Write a program to find out Number is Armstrong or not using UDF.

#include<stdio.h>
#include<conio.h>

int arm(int n);

int arm(int n){
    int original, digit, sum = 0;
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
    return 0;
}

void main(){
    int x;
    clrscr();
    printf("\nEnter Number:");
    scanf("%d",&x);
    arm(x);
    getch();
}