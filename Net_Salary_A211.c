#include <stdio.h>

int main() {
    float gs,ns,allowance, deduction;
    printf("Enter gross salary: ");
    scanf("%f", &gs);
    allowance = gs*0.1;
    deduction= gs*0.03;
    ns = gs + allowance - deduction;
    printf("Net salary is: %f",ns);
    return 0;
}