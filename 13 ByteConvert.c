// Convert Bytes into KB, MB and GB

#include <stdio.h>
int main() {
    float bytes, kb, mb, gb;
    printf("Enter bytes: ");
    scanf("%f", &bytes);
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    printf("%.2f bytes = %.2f KB = %.2f MB = %.2f GB\n", bytes, kb, mb, gb);
    return 0;
}
