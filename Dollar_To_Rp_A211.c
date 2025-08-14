#include <stdio.h>
int main(){
    // 1$ = 48Rp
    int dol,rp;
    printf("Enter the amount in dollars: ");
    scanf("%d",&dol);
    rp = dol * 48;
    printf("%d Dollars in Rupees is %d Rp.",dol,rp);
    return 0;

}
