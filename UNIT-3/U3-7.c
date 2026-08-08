/*7. Write a C Program to input price quantity of an 
item from user and display final payment according to 
following condition. 
If total purchase(price*quantity) is greater than 
Rs.1000 then calculate discount 15% otherwise 
calculate discount 10% of total rupees. */

#include <stdio.h>
#include <conio.h>

int main()
{
    int quantity;
    float price, total, discount, finalAmount;

    clrscr();

    printf("Enter price of item: ");
    scanf("%f", &price);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if (total > 1000)
        discount = total * 15 / 100;
    else
        discount = total * 10 / 100;

    finalAmount = total - discount;

    printf("\nTotal Amount = %.2f", total);
    printf("\nDiscount = %.2f", discount);
    printf("\nFinal Payment = %.2f", finalAmount);

    getch();
    return 0;
}