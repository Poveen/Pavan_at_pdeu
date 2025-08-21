#include <stdio.h>

int main() {
    float l, b, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area of Rect = %.2f\n", area);
    printf("Perimeter of Rect = %.2f\n", perimeter);

    return 0;
}
