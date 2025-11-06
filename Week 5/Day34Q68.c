//Delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100], n, i, position;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}