#include <stdio.h>
void findIndex(int arr[], int n, int T) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == T) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
}
int main() {
    int n, T;
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    findIndex(arr, n, T);
    return 0;
}