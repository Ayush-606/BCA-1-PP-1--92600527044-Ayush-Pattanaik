// 18. Input number and check whether the number is positive, negative or zero. 


#include<stdio.h>
#include<conio.h>

void main(){
    int x;
    clrscr();
    printf("\nEnter Number :");
    scanf("%d",&x);
    if(x==0){
        printf("Number %d, is zero", x);
    }
    else if(x>0){
        printf("Number %d, is positive", x);
    }
    else
        printf("Number %d, is negative", x);

    getch();
}