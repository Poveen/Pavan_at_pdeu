#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, product, div;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    div = num1 / num2;
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", product);
    printf("Division = %.2f\n", div);

    return 0;
}
