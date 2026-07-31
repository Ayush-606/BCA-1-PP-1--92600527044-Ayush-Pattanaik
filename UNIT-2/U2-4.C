// 4. Write a program that input value from user and find out Area of Circle.

#include<stdio.h>
#include<conio.h>

void main(){
    float Radius;
    clrscr();
    printf("Enter Radius Of Circle: \n");
    scanf("%f",&Radius);
    printf("The Area Of Circle is: %f",3.14*Radius*Radius);
    getch();
}