#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    int d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d = ( a + b + c) / 3;
    printf("Average: %.2f",d);
    return 0;
}