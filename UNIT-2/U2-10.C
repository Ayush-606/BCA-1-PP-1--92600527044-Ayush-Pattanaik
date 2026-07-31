// 10. Write a program that input quantity, price, discount and display final amount.

#include<stdio.h>
#include<conio.h>

void main(){
    float Input_quantity,Price,Discount,Final_Amount;
    clrscr();
    printf("Enter Quantity of Items: \n");
    scanf("%f",&Input_quantity);
    printf("Enter Price Of Item: \n");
    scanf("%f",&Price);
    printf("Enter Discount: \n");
    scanf("%f",&Discount);
    Final_Amount = Input_quantity*Price-((Input_quantity*Price*Discount)/100);
    printf("The Final Amount Is: %.2f",Final_Amount);
    getch();
}