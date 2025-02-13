#include <stdio.h>

int main() {
    char n;
    
    // Read a single character grade (with a space to consume any leftover newline)
    scanf(" %c", &n);  // Notice the space before %c

    switch(n) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Grade\n");
            break;
    }

    return 0;
}
