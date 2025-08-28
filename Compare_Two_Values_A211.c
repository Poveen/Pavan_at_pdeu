#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",  &a,&b);
    if (a >b) {
        printf("%d is larger and %d is smaller.\n", a,b);
    } else if (a < b) {
        printf("%d is larger and %d is smaller.\n", b, a);
    } else {
        printf("Both numbers are equal: %d = %d\n", a,b);
    }

    return 0;
}
