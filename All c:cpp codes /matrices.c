#include <stdio.h>
int main() {
    int a[2][2], b[2][2], c[2][2], i, j;
    
    printf("Enter 4 elements for Matrix A (row-wise): ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter 4 elements for Matrix B (row-wise): ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    // Matrix Addition and printing
    printf("\nSum Matrix C:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n"); // Newline after each row
    }
    
    return 0;
}