#include <stdio.h>

int main() {
    float p, c, m, total, avg;
    printf("Enter Physics marks: ");
    scanf("%f", &p);
    printf("Enter Chemistry marks: ");
    scanf("%f", &c);
    printf("Enter Math marks: ");
    scanf("%f", &m);
    total = p + c + m;
    avg = total / 3;
    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", avg);
    return 0;
}
