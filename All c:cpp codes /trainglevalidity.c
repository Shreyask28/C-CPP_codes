#include <stdio.h>
int main() {
 float a, b, c;
 printf("Enter three side lengths: ");
 if (scanf("%f %f %f", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) return 1;
 if ((a + b > c) && (a + c > b) && (b + c > a)) {
  printf("The triangle is VALID.\n");
 } else {
  printf("The triangle is NOT valid.\n");
 }
 return 0;
}
