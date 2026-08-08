// 3. Write a program that input age from user if age>=18 then print person is eligible for vote else person is not eligible for vote.

#include<stdio.h>
#include<conio.h>

void main(){
    int x;
    clrscr();
    printf("\nEnter Age: ");
    scanf("%d",&x);
    if(x>=18){
        printf("Person is eligible to vote");
    }
    else
        printf("Person is not eligible to vote");
    getch();
}