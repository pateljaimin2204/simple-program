//  Fahrenheit into Celsius 

#include <stdio.h>
int main() {
    float c, f;
    printf("Enter Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0/9.0 * (f - 32);
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);
    return 0;
}
