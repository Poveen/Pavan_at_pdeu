#include <stdio.h>

int main() {
    float gross_sales, net_sales;
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales );
    net_sales = gross_sales* 0.90;
    printf("Gross Sales:%.2f\n",gross_sales);
    printf("Net Sales (with 10%% discount): %.2f\n",net_sales);

    return 0;
}
