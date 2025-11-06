//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int nge[100]; 

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        nge[i] = -1; 
    }

    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge[i] = arr[j];
                break; 
            }
        }
    }

    
    printf("Next Greater Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], nge[i]);
    }

    return 0;
}

