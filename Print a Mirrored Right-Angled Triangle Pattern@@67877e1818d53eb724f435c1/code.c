#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}