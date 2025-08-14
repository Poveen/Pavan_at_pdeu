#include <stdio.h>
int main(){
    float grm,kg;
    printf("Enter the value in Gram: ");
    scanf("%f",&grm);
    kg = grm/1000;
    printf("%.3f gram in kg is %.3f kg",grm,kg);
    return 0;

}
