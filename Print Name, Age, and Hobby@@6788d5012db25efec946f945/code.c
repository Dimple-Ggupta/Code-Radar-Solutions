#include <stdio.h>
int main() {
    int i;
    char a[];
    scanf("%c",&i);
    printf("Name: ");
    for(i=0;i<6;i++){
        printf("%c",a[i]);
    }
    printf("\n");
    int b;
    scanf("%d",&b);
    printf("Age: %d\n",b);
    char human[100];
    scanf("%s",&human);
    printf("Hobby: %s\n",human);
    return 0;
}