#include <stdio.h>

int main(){
    int num_hours;
    float gross_pay = 0.0;
    float taxes = 0.0;
    float net_pay = 0.0;
    float basic_pay_h = 12.0;
    float tax_first_step = 0.15;
    float tax_second_step = 0.2;
    float tax_last_step = 0.25;

    printf("Insert the number of working hours: ");
    scanf("%d",&num_hours);

    if(num_hours <= 40)
        gross_pay = num_hours * basic_pay_h;
    else{
        gross_pay = (40 * basic_pay_h) + ((num_hours - 40) * 18.0);
    }

    if (gross_pay <= 300.0)
        taxes = gross_pay * tax_first_step;
    else if (gross_pay > 300.0 && gross_pay <= 450.0)
        taxes = (300.0 * tax_first_step) + ((gross_pay - 300.0) * tax_second_step);
    else if (gross_pay > 450.0)
        taxes = (300.0 * tax_first_step) + (150.0 * tax_second_step) + ((gross_pay - 450.0) * tax_last_step);

    net_pay = gross_pay - taxes;

    printf("The calculations regarding %d hours of work are:\n",num_hours);
    printf("Gross pay = %.2f\n", gross_pay);
    printf("Taxes = %.2f\n", taxes);
    printf("Net pay = %.2f\n", net_pay);
}
