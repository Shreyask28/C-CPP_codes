#include <stdio.h>
int main() {
 int num, originalNum, remainder, result = 0, n = 0, k, p;
 printf("Enter integer: ");
 if (scanf("%d", &num) != 1 || num <= 0) return 1;
 originalNum = num;
 while (num != 0) {
  num /= 10; ++n;
 }
 num = originalNum;
 while (num != 0) {
  remainder = num % 10;
  p = 1;
  for (k = 0; k < n; k++) p *= remainder;
  result += p;
  num /= 10;
 }
 printf("%d is %s.\n", originalNum, (result == originalNum) ? "an Armstrong number" : "NOT an Armstrong number"); return 0;
}
