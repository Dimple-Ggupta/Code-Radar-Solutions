#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b && a>c){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}