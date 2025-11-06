//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
