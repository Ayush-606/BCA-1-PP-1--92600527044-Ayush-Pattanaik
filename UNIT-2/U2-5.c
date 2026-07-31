// 5. Write a program that input two values from user and find out Area of Rectangle.

#include<stdio.h>
#include<conio.h>

void main(){
    float Length,Breadth;
    clrscr();
    printf("Enter Length Of Rectangle: \n");
    scanf("%f",&Length);
    printf("Enter Breadth Of Rectangle: \n");
    scanf("%f",&Breadth);
    printf("The Area Of Rectangle is: %f",Length*Breadth);
    getch();
}