#include <stdio.h>

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = (22.0/7.0) * radius * radius;
    printf("Area of Circle = %f\n", area);

    return 0;
}
