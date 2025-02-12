// Your code here...
#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c = a - b;
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