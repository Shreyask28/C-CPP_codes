#include <stdio.h>

float calculate_bill(int units);

float calculate_bill(int units) {
    float total_cost = 0.0;
    float surcharge = 0.0;
    
    if (units <= 50) {
        total_cost = units * 0.50;
    } else if (units <= 150) { 
        total_cost = 50 * 0.50; 
        total_cost += (units - 50) * 0.75;
    } else if (units <= 250) { 
        total_cost = 50 * 0.50; 
        total_cost += 100 * 0.75;
        total_cost += (units - 150) * 1.20;
    } else { 
        total_cost = 50 * 0.50;
        total_cost += 100 * 0.75;
        total_cost += 100 * 1.20;
        total_cost += (units - 250) * 1.50;
    }
    
    surcharge = total_cost * 0.20; 
    
    return total_cost + surcharge;
}

int main() {
    int consumed_units;
    float final_bill;

    printf("Welcome to the Electricity Bill Calculator\n");
    printf("-----------------------------------------\n");
    
    printf("Enter the total electricity units consumed: ");
    if (scanf("%d", &consumed_units) != 1 || consumed_units < 0) {
        printf("Invalid input. Please enter a positive integer for units.\n");
        return 1;
    }

    final_bill = calculate_bill(consumed_units);

    printf("\n--- Calculation Summary ---\n");
    printf("Units Consumed: %d units\n", consumed_units);
    printf("Total Bill Amount (including 20%% surcharge): Rs. %.2f\n", final_bill);
    printf("---------------------------\n");

    return 0; 
}