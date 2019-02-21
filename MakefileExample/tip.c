#include <stdio.h>
#include "get_double.h"
int main()
{
    double price, tip;
    price = get_double("Enter meal price: ", 0, 2000);
    tip = get_double("Enter tip amount(percent): ", 0, 100);

    double tipAmt = price * tip / 100;
    double total = price + tipAmt;

    printf("Tip amount: %lf\n", tipAmt);
    printf("Total amount: %lf\n", total);
    return 0;
}