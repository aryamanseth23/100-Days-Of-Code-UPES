//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    char fileName[100];
    char newLine[256];

    printf("Enter the file name to append text: ");
    scanf("%s", fileName);

    FILE *file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the line of text to append: ");
    getchar();
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, file);

    fclose(file);

    printf("Text appended successfully to %s.\n", fileName);

    return 0;
}