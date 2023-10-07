#include <stdio.h>

int main()
{
    double usd_amount;
    double exchange_fee;
    double gbp_amount;
    double jpy_amount;

    printf("Enter the amount of US dollars: ");
    scanf("%lf", &usd_amount);

    exchange_fee = usd_amount * 0.10;

    double remaining_usd_amount = usd_amount - exchange_fee;

    // Calculate the amount of GBP and JPY to be converted
    gbp_amount = remaining_usd_amount / 2.0;
    jpy_amount = remaining_usd_amount / 2.0 * 127.65;

    // Print the output
    printf("GBP: %.2f\n", gbp_amount);
    printf("JPY: %.0f\n", jpy_amount);

    return 0;
}