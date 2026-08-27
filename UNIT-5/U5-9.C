// 9. Write a program to find out area of rectangle using UDF.

#include<stdio.h>
#include<conio.h>

float area(float x,float y);

float area(float x,float y){
    return x*y;
}

void main(){
    float l,b,a;
    clrscr();
    printf("\nEnter Length And Breadth Of Rectangle:");
    scanf("%f%f",&l,&b);
    a=area(l,b);
    printf("\nArea of Rectangle: %.2f",a);
    getch();
}