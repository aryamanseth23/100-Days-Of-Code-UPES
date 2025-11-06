//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longestWord[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    
    char *token = strtok(str, " ");
    while (token != NULL) {
        int length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, token);
        }
        token = strtok(NULL, " ");
    }

    printf("The longest word is: %s\n", longestWord);
    return 0;
}