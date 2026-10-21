#include <stdio.h>
int main() {
 int choice;
 printf("Coffee Shop Menu \n");
 printf("1. Coffee (150)\n");
 printf("2. Dark Chocolate (120)\n");
 printf("3. Tea (80)\n");
 printf("4. Ice Cream (100)\n");
 printf("5. Cold Coffee (180)\n");
 printf("Enter your choice (1-5): ");
 if (scanf("%d", &choice) != 1) return 1;
 switch (choice) {
  case 1: printf("You ordered Coffee. Your total is 150.\n"); break;
  case 2: printf("You ordered Dark Chocolate. Your total is 120.\n"); break;
  case 3: printf("You ordered Tea. Your total is 80.\n");
  break;
  case 4: printf("You ordered Ice Cream. Your total is 100.\n"); break;
  case 5: printf("You ordered Cold Coffee. Your total is 180.\n"); break;
 default: printf("Invalid choice. Please select a valid number between 1 and 5.\n"); return 0;
 }
}


