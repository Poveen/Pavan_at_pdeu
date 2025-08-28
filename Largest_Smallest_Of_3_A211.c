#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers (ints): ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c){
        printf("All values are the same");
        }
    else if(a>b && a>c){
        if(b>c)
           printf("%d > %d > %d",a,b,c);
        else if (b < c)
            printf("%d > %d > %d",a,c,b);
        else{ printf("%d > %d = %d",a,b,c);} }
    else if(b>a && b>c){
        if(a>c)
           printf("%d > %d > %d",b,a,c);
        else if (a < c)
            printf("%d > %d > %d",b,c,a);
        else{ printf("%d > %d = %d",b,a,c); } }
    else if(c>a && c>b && a != b){
        if(a>b)
           printf("%d > %d > %d",c,a,b);
        else if (a < b)
            printf("%d > %d > %d",c,b,a);
        else{ printf("%d > %d = %d",b,a,c);}}
    else if(a==b){
        if(b>c)
           printf("%d = %d > %d",a,b,c);
        else if (b < c)
            printf("%d > %d = %d",c,b,a);
        else{ printf("%d > %d = %d",b,a,c);}}
     else if(b>a && b>c){
        if(a>c)
           printf("%d > %d > %d",b,a,c);
        else if (a < c)
            printf("%d > %d > %d",b,c,a);
        else{ printf("%d > %d = %d",b,a,c);}}
    else if(a==c){
        if(c>b)
           printf("%d = %d > %d",c,a,b);
        else if (c < b)
            printf("%d > %d = %d",b,c,a);}







    return 0;

}
