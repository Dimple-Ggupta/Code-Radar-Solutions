#include <stdio.h>

int main() {
    int n;
    int sum;

    // Input the value of n from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Using the formula to calculate the sum of the first n natural numbers
    sum = n * (n + 1) / 2;

    // Output the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
