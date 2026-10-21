#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;

    for(i = 1; i <= n; i++) 
    {
        for(j = i; j <= n; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= (2*i - 1); k++) 
        { 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//Row Number (i),Calculation 2∗i−1,Number of Asterisks,Pattern printed by k loop
// 1,2∗1−1=1, 1,*
// 2,2∗2−1=3, 3,***
// 3,2∗3−1=5, 5,*****
// 4,2∗4−1=7, 7,*******
// 5,2∗5−1=9, 9,*********
// So the number of asterisks printed in each row follows the pattern of odd numbers starting from 1.
// Thus, the triangle pattern is formed by printing increasing odd numbers of asterisks centered with spaces.
// The outer loop (i) controls the number of rows.
// The first inner loop (j) prints the leading spaces to center the asterisks.
// The second inner loop (k) prints the asterisks based on the formula 2*i−1.
// Hence, the complete triangle pattern is printed as shown above.
// Explanation of loops:
// Outer Loop (i): Iterates from 1 to n (number of rows).
// First Inner Loop (j): Prints spaces. It starts from the current row number (i) to n, ensuring that the asterisks are centered.
// Second Inner Loop (k):       
// Prints asterisks. It runs from 1 to (2*i - 1), which gives the correct number of asterisks for each row.
// After the inner loops, a newline character is printed to move to the next row.
// Thus, the triangle pattern is printed correctly.
// Example Output for n=5:
//      *
//     ***
//    *****
//   *******
//  *********
// Explanation of the pattern:
