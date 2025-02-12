#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&d);
    c = a + b;
    if (c >d){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}