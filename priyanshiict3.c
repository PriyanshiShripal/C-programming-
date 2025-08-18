#include <stdio.h>
int main() {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if(gross > 10000) {
        allowance = gross * 0.10;
        deduction = gross * 0.03;
    } else if(gross > 5000) {
        allowance = gross * 0.07;
        deduction = gross * 0.02;
    } else {
        allowance = 0;
        deduction = 0;
    }

    net = gross + allowance - deduction;
    printf("Net Salary = %.2f", net);
    return 0;
}
