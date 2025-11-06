//Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    
    for (i = length - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = str[i];
    }
    reversed[j] = '\0';

    printf("Reversed string: %s\n", reversed);

    return 0;
}
