//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b; // Step 1: Sum of both numbers is stored in 'a'
    b = a - b; // Step 2: Original value of 'a' is assigned to 'b'
    a = a - b; // Step 3: Original value of 'b' is assigned to 'a'

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}