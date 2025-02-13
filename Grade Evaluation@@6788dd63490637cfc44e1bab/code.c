#include <stdio.h>
int main (){
    char n;
    scanf("%c",&n);
    switch(n){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}