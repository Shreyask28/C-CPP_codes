#include <stdio.h>
int main() {
    int a[10], n, s = 0, i;
    printf("Enter size (max 10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) return 1;
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) return 1;
        s = s + a[i];
    }
    printf("Sum: %d\n", s);
    return 0;
}