#include <stdio.h>
void findIndex(int arr[], int N, int T) {
    //int found = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {
            return i;
        }

    }
    return -1;
    }
}
int main() {
    int N, T;
    scanf("%d", &N);
    int arr[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    findIndex(arr, N, T);
    return 0;
}