// Your code here..
#include <stdio.h>

int main() {
	// your code goes here
	int a,b;
    char n;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%c",&n);
	do{
	   switch(n){
	        case '+':
	        printf("%d",a+b);
	        break;
	        case '-':
	        printf("%d",a-b);
	        break;
            case '*':
            printf("%d",a *b);
            break;
            case '/':
            printf("%d",a/b);
            break;
       }   
	return 0;
}