#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    if (m1 < 35 || m2 <35 || m3< 35) {
        printf("Grade: Fail \n");
    } else if (m1 < 100 || m2 < 100 || m3 > 100)
        printf("Kuchh to locha hei...");
    else if (avg >= 70)
        printf("Grade: Distinction\n");
    else if (avg >= 60)
        printf("Grade: First Class\n");
    else if (avg >= 50)
        printf("Grade: Second Class\n");
    else if (avg >= 35)
        printf("Grade: Third Class\n");
    else if (m1 < 100 || m2 < 100 || m3 > 100)
        printf("Kuchh to locha hei...");
    else
        printf("Grade: Fail\n");


    return 0;
}
