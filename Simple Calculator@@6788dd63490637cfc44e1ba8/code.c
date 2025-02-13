#include <stdio.h>

int main() {
    int a, b;
    char n;
    
    // Read integers a and b
    scanf("%d", &a);
    scanf("%d", &b);

    // Read the operator, with a space to consume any leftover newline character
    scanf(" %c", &n);  // Notice the space before %c

    switch (n) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
                printf("%d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    return 0;
}
