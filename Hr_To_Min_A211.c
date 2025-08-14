#include <stdio.h>
int main(){
    int hr,min;
    printf("Enter the number of hours: ");
    scanf("%d",&hr);
    min = hr * 60;
    printf("%d hours in minutes is %d mins.",hr,min);
    return 0;

}
