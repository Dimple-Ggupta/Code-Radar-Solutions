#include <stdio.h>
int findIndex(int arr[], int N, int T) {
    //int found = 0;
    int i;
    for (i = 0; i < N; i++) {
        if (arr[i] == T) {
            return i;
        }

    }
    return -1;
    }

int main() {
    int N, T;
    scanf("%d", &N);
    int arr[N]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    int index=findIndex(arr,N,T);
    printf("%d",index);
    return 0;
}