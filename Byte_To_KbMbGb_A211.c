#include <stdio.h>
int main(){
    float byte,kb,mb,gb;
    printf("Enter the value in bytes: ");
    scanf("%f",&byte);
    kb = byte/1024;
    mb = kb/1024;
    gb = mb/1024;
    printf("In Kb: %f \n In Mb: %f \n In Gb: %f", kb,mb,gb);
    return 0;

}
