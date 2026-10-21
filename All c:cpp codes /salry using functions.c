#include <stdio.h>

float calculateGrossSalary(float basicSalary);

int main() {
    float basic, gross;

    printf("Enter the Basic Salary of the employee: Rs. ");
    scanf("%f", &basic);

    gross = calculateGrossSalary(basic);

    printf("\n--- Salary Details ---\n");
    printf("Basic Salary: Rs. %.2f\n", basic);
    printf("Gross Salary: Rs. %.2f\n", gross);
    printf("----------------------\n");

    return 0;
}

float calculateGrossSalary(float basicSalary) {
    float hra, da, grossSalary;

    if (basicSalary <= 10000) {
        hra = basicSalary * 0.20;
        da = basicSalary * 0.80;
    } else if (basicSalary <= 20000) {
        hra = basicSalary * 0.25;
        da = basicSalary * 0.90;
    } else {
        hra = basicSalary * 0.30;
        da = basicSalary * 0.95;
    }

    grossSalary = basicSalary + hra + da;
    
    printf("HRA: Rs. %.2f\n", hra);
    printf("DA: Rs. %.2f\n", da);

    return grossSalary;
}