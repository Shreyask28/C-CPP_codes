#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i; // 
    }
    return f;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);

    return 0;
}
//  f = f * i;
       //|
       //|
       //|
        // Loop Iteration,Value of i (Loop Counter),Calculation: fact = fact * i,New Value of fact
//Start,(Before loop),Initial value,1
//1st Pass, 1,fact = 1×1,1
//2nd Pass, 2,fact = 1×2,2
//3rd Pass, 3,fact = 2×3,6
//4th Pass, 4,fact = 6×4,24=i
//End,5 (Loop stops),,24
// so i 1,2,3,4 so on till loop ends



