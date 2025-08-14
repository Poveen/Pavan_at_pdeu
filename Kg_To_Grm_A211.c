#include <stdio.h>
int main(){
    float grm,kg;
    printf("Enter the value in Kg: ");
    scanf("%f",&kg);
    grm = kg*1000;
    printf("%.3f kg in gram is %.2f gm",kg,grm);
    return 0;

}
