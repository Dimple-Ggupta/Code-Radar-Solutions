#include <stdio.h>
#include <stdlib.h>
int sumOfDigits(int num){
    num = abs(num);
    int sum = 0;
    while (num !=0){
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0 ; i < n ; i++){
        printf("%d ",sumOfDigits(arr[i]));
    }
    return 0;
}