#include <stdio.h>
int main(){
    // 1$ = 48Rp
    float dol,rp;
    printf("Enter the amount in rupees: ");
    scanf("%f",&rp);
    dol = rp/48;
    printf("%.2f Rupees in Dollars is %.2f $.",rp,dol);
    return 0;

}
