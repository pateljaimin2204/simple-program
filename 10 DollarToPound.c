// Convert Dollars into Pound

#include <stdio.h>
int main() {
    float dollars, rs, pound;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    pound = rs / 70;
    printf("%.2f dollars = %.2f pounds\n", dollars, pound);
    return 0;
}
