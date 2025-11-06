//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1; 
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is: %llu\n", n, factorial);
    return 0;
}