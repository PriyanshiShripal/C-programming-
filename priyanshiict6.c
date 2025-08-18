#include <stdio.h>
int main() {
    int m1, m2, m3, total;
    float avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total = %d, Average = %.2f\n", total, avg);

    if(avg >= 70)
        printf("Grade: Distinction");
    else if(avg >= 60)
        printf("Grade: First Class");
    else if(avg >= 50)
        printf("Grade: Second Class");
    else if(avg >= 40)
        printf("Grade: Pass");
    else
        printf("Grade: Fail");

    return 0;
}
