#include <stdio.h>
int main() {
 int num;
 printf("Enter an integer: ");
 if (scanf("%d", &num) != 1) return 1;
 printf("%d is %s.\n", num, (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero");
 return 0;
}
