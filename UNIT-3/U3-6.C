/*6. Write a program that Input Salary From the user if 
salary Greater than or equal to 5000 then hr=5% of 
basic salary, ta=6% of basic salary, da=4% of basic 
salary and pf=5% of basic salary. but if salary is less 
than 5000 then hra=4%,ta=5%,da=3% and 
pf=4%.find out gross salary. printhra,ta,da,pf and 
gross salary(Hint : take all variable as float. formula 
for gross salary=salary+hra+ta+da- pf).*/

#include <stdio.h>
#include <conio.h>

void main()
{
    float sal, hra, ta, da, pf, gross_sal;

    printf("\nEnter Salary: ");
    scanf("%f", &sal);

    if (sal >= 5000)
    {
        hra = (5.0 / 100) * sal;
        ta = (6.0 / 100) * sal;
        da = (4.0 / 100) * sal;
        pf = (5.0 / 100) * sal;
    }
    else
    {
        hra = (4.0 / 100) * sal;
        ta = (5.0 / 100) * sal;
        da = (3.0 / 100) * sal;
        pf = (4.0 / 100) * sal;
    }

    gross_sal = sal + hra + ta + da - pf;

    printf("\nSalary = %.2f", sal);
    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nDA = %.2f", da);
    printf("\nPF = %.2f", pf);
    printf("\nGross Salary = %.2f", gross_sal);

    getch();
}