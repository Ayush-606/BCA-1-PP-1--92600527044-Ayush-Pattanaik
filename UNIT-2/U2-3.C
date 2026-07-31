// 3. Write a program that takes 3 values for Principle Amount, Rate of Interest and No. of Years and find out Simple Interest.

#include<stdio.h>
#include<conio.h>

void main(){
    float SI,P,R,T;
    clrscr();
    printf("Enter Principal Amount: \n");
    scanf("%f",&P);
    printf("Enter Rate Of Interest: \n");
    scanf("%f",&R);
    printf("Enter Total Time: \n");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("*************************\n");
    printf("*Principal Amount=%.2f*\n",P);
    printf("*Rate of Interest=%.2f  *\n",R);
    printf("*Time=%.2f              *\n",T);
    printf("*************************\n");
    printf("*Simple Interest=%.2f  *\n",SI);
    printf("*************************");

    getch();
}