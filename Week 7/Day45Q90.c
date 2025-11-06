//Toggle case of each character in a string.
#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    int length = 0;
    while (str[length] != '\0') length++;
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

   
    for (i = 0; i < length; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } 
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    printf("String after toggling case: %s\n", str);

    return 0;
}
