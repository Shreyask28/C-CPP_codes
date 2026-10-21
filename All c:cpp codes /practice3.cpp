#include <stdio.h>

int main() {
   int i ,j ,row,col;
   printf("Enter number of rows and columns: ");
   scanf("%d %d", &row, &col);
   for(i=1; i<=row; i++) {
      for(j=1; j<=col; j++) {
         if(i==1 || i==row || j==1 || j==col) {
            printf("* ");
         } else {
            printf("  ");
         }
      }
      printf("\n");
   }
   
}