// Convert Dollars into Rs
 
#include <stdio.h>
int main() {
    float dollars, rs;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    rs = dollars * 48;
    printf("%.2f dollars = %.2f Rs\n", dollars, rs);
    return 0;
}
