// Your code here...
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = b - a;
    if (c>0){
        printf("Profit");
    }
    else if(c<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}