// Your code here...
#include <stdio.h>

int main() {
    int n, i;
    int binary[32];  // Array to store binary digits

    scanf("%d", &n);

    // Convert decimal to binary
    for (i = 0; n > 0; i++) {
        binary[i] = n % 2;  // Store the remainder (binary digit)
        n = n / 2;  // Divide the number by 2
    }

    // Print the binary number in reverse order
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
