// 10. Write a program to find out area of circle using UDF. 

#include<stdio.h>
#include<conio.h>

float area(float x);

float area(float x){
    return 3.14*x*x;
}

void main(){
    float r,a;
    clrscr();
    printf("\nEnter Radius Of Circle:");
    scanf("%f",&r);
    a=area(r);
    printf("\nArea of Circle: %.2f",a);
    getch();
}