#include <stdio.h>

int sumSeries(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = sumSeries(n);
    printf("Sum of series 1 to %d is: %d\n", n, result);

    return 0;
}
