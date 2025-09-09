//  Net Salary

#include <stdio.h>
int main() {
    float gross, net, allowance, deduction;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = gross * 0.10;
    deduction = gross * 0.03;
    net = gross + allowance - deduction;
    printf("Net Salary = %.2f\n", net);
    return 0;
}
