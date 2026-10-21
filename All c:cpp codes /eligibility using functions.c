#include <stdio.h>

float calculatePercentage(int p, int c, int b, int m, int comp, int max_marks);
void findGrade(float percentage);

int main() {
    int physics, chemistry, biology, mathematics, computer;
    float percentage;
    int max_marks_per_subject = 100;
    int total_max_marks = 5 * max_marks_per_subject;

    printf("Enter marks for five subjects (out of 100 each):\n");
    printf("Physics: ");
    scanf("%d", &physics);
    printf("Chemistry: ");
    scanf("%d", &chemistry);
    printf("Biology: ");
    scanf("%d", &biology);
    printf("Mathematics: ");
    scanf("%d", &mathematics);
    printf("Computer: ");
    scanf("%d", &computer);

    percentage = calculatePercentage(physics, chemistry, biology, mathematics, computer, total_max_marks);
    
    printf("\nTotal Marks Obtained: %d\n", (int)(percentage * total_max_marks / 100.0));
    printf("Total Percentage: %.2f%%\n", percentage);

    findGrade(percentage);

    return 0;
}

float calculatePercentage(int p, int c, int b, int m, int comp, int max_marks) {
    int total_marks = p + c + b + m + comp;
    float per = ((float)total_marks / max_marks) * 100.0;
    
    return per;
}

void findGrade(float percentage) {
    printf("Calculated Grade: ");
    
    if (percentage >= 90) {
        printf("Grade A\n");
    } else if (percentage >= 80) {
        printf("Grade B\n");
    } else if (percentage >= 70) {
        printf("Grade C\n");
    } else if (percentage >= 60) {
        printf("Grade D\n");
    } else if (percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Grade F\n");
    }
}