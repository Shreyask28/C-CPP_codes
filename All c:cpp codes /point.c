#include <stdio.h>

int main() {
    float x, y;

    printf("Enter x coordinate: ");
    scanf("%f", &x);

    printf("Enter y coordinate: ");
    scanf("%f", &y);

    if (x > 0 && y > 0) {
        printf("Point lies in Quadrant I\n");
    } else if (x < 0 && y > 0) {
        printf("Point lies in Quadrant II\n");
    } else if (x < 0 && y < 0) {
        printf("Point lies in Quadrant III\n");
    } else if (x > 0 && y < 0) {
        printf("Point lies in Quadrant IV\n");
    } else if (x == 0 && y == 0) {
        printf("Point lies at the Origin\n");
    } else if (x == 0) {
        printf("Point lies on the Y-axis\n");
    } else if (y == 0) {
        printf("Point lies on the X-axis\n");
    }

    return 0;
}
