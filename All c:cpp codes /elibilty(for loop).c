#include <stdio.h>

int main() {
    int physics, chemistry, biology, mathematics, computer;
    int total_marks;
    float percentage;
    
    scanf("%d %d %d %d %d", &physics, &chemistry, &biology, &mathematics, &computer);
    
    total_marks = physics + chemistry + biology + mathematics + computer;
    
    percentage = (float)total_marks / 5.0;
    
    printf("Percentage: %.2f\n", percentage);
    
    if (percentage >= 90.0) {
        printf("Grade A\n");
    } else if (percentage >= 80.0) {
        printf("Grade B\n");
    } else if (percentage >= 70.0) {
        printf("Grade C\n");
    } else if (percentage >= 60.0) {
        printf("Grade D\n");
    } else if (percentage >= 40.0) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }
    
    return 0;
}