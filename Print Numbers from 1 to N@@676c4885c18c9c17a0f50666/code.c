#include <stdio.h>

int main() {
    int n;

    // Input the value of n from the user
    scanf("%d", &n);

    // Loop to print natural numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
