//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, product = 1, remainder;
    int hasOddDigit = 0; 
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            hasOddDigit = 1; 
        }
        num /= 10;
    }

    if (hasOddDigit) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}