// Area & Perimeter of Square

#include <stdio.h>
int main() {
    float l, a, p;
    printf("Enter side length: ");
    scanf("%f", &l);
    a = l * l;
    p = 4 * l;
    printf("Area = %.2f, Perimeter = %.2f\n", a, p);
    return 0;
}
