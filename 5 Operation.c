//  Add, multiply, subtract and divide two numbers

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    if (b != 0)
        printf("Division = %.2f\n", (float)a / b);
    else
        printf("Division by zero not allowed.\n");
    return 0;
}
