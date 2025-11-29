//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array (one element will be repeated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int repeatedElement = -1;
    for (int i = 0; i < n; i++) {
        int index = arr[i] < 0 ? -arr[i] : arr[i];
        if (arr[index] < 0) {
            repeatedElement = index;
            break;
        } else {
            arr[index] = -arr[index];
        }
    }
    
    printf("The repeated element is: %d\n", repeatedElement);
    
    return 0;
}