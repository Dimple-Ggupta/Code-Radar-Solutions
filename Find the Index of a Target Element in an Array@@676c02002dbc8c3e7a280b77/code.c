#include <stdio.h>

// Function to find and print indices of target element (or -1 if not found)
void findIndex(int arr[], int n, int target) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
}
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    findIndex(arr, n, target);
    
    return 0;
}