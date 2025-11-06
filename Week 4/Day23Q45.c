//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int numerator = 2 * (i + 1);         
        int denominator = 4 * i + 3;        
        sum += (float)numerator / denominator;
    }
    printf("The sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}