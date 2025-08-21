#include <stdio.h>

int main() {
    float dol, pound;
    printf("Enter Dollars: ");
    scanf("%f", &dol);
    pound = dol * (48.0/70.0);
    printf("%.2f $ in Pound is = %.2f\n", dol,pound);

    return 0;
}
