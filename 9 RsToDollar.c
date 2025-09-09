// Convert Rs into Dollars

#include <stdio.h>
int main() {
    float dollars, rs;
    printf("Enter Rs: ");
    scanf("%f", &rs);
    dollars = rs / 48;
    printf("%.2f Rs = %.2f dollars\n", rs, dollars);
    return 0;
}
