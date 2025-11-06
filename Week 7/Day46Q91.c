//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char result[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    
    for (i = 0; i < length; i++) {
        char ch = str[i];
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = ch;
        }
    }
    result[j] = '\0'; 

    printf("String after removing vowels: %s\n", result);

    return 0;
}