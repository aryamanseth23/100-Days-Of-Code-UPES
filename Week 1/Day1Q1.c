//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers:");
    scanf("%d ", &a);
    scanf("%d", &b);
    sum = a + b;
printf(" The sum of %d and %d is %d\n",a,b, a+b );
    return 0;
}