#include <stdio.h>
int main() {
    char string[200];
    scanf("%s",&string);
    char hello[200];
    scanf("%s",&hello);
    printf("You entered: %s",string);
    printf("and");
    printf("%s",hello);
    return 0;
}