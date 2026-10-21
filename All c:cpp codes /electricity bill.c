#include <stdio.h>

int main() {
    int units;
    double bill_amount = 0.0;
    double surcharge_rate = 0.20;

    printf("Enter the total number of electricity units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer for units.\n");
        return 1;
    }

    if (units <= 50) {
        bill_amount = units * 0.50;
    } else if (units <= 150) {
        bill_amount = 50 * 0.50;
        bill_amount += (units - 50) * 0.75;
    } else if (units <= 250) {
        bill_amount = 50 * 0.50;
        bill_amount += 100 * 0.75;
        bill_amount += (units - 150) * 1.20;
    } else {
        bill_amount = 50 * 0.50;
        bill_amount += 100 * 0.75;
        bill_amount += 100 * 1.20;
        bill_amount += (units - 250) * 1.50;
    }

    double base_bill = bill_amount;
    double surcharge_amount = base_bill * surcharge_rate;
    bill_amount += surcharge_amount;

    printf("\n--- Electricity Bill Details ---\n");
    printf("Units Consumed: %d units\n", units);
    printf("Base Bill Amount: Rs. %.2lf\n", base_bill);
    printf("Surcharge (20%%): Rs. %.2lf\n", surcharge_amount);
    printf("*Total Electricity Bill: Rs. %.2lf*\n", bill_amount);

    return 0;
}