#include <stdio.h>
int main(){
char name;
scanf("%c",&name);
if (name >= 65 && name<=95){
    printf("Uppercase");
}
else if (name>=97 && name<=122){
    printf("Lowercase");
}
else{
    printf("Not an alphabet");
}
return 0;
}