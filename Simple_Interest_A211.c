#include <stdio.h>

int main() {
    float p, t, r, interest;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Time in years: ");
    scanf("%f", &t);
    printf("Enter Rate(%) of Interest: ");
    scanf("%f", &r);
    interest = (p*r*t) / 100;
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
