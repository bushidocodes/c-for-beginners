#include <stdio.h>
#include <stdlib.h>
#define HOURLY_RATE 12.00

int main()
{
    float hoursWorked, grossPay, totalTax, netPay;
    printf("Weekly Pay Calculator\n");
    printf("Enter hours worked this week: ");
    scanf("%f", &hoursWorked);

    grossPay = (hoursWorked > 40 ? hoursWorked * HOURLY_RATE + (hoursWorked - 40) * 0.5 * HOURLY_RATE : hoursWorked * HOURLY_RATE);

    if (grossPay <= 300)
    {
        totalTax = 0.15 * grossPay;
    }
    else if (grossPay <= 450)
    {
        totalTax = 0.2 * (grossPay - 300) + 45;
    }
    else
    {
        totalTax = 0.35 * (grossPay - 450) + 45 + 30;
    }

    netPay = grossPay - totalTax;

    printf("Hours Worked: %.2f\n", hoursWorked);
    printf("Gross: $%.2f\n", grossPay);
    printf("Tax: $%.2f\n", totalTax);
    printf("Net: $%.2f\n", netPay);

    return 0;
}