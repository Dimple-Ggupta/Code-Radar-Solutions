#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0;
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Print with space (or newline) for clarity
    printf("%d %d", even, odd);  // or printf("%d\n%d", even, odd);
    return 0;
}