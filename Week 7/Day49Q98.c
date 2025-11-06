//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[200];
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int i;

    printf("Formatted Name: ");

    
    for (i = 0; i < len; i++) {
        if (i == 0 && isalpha(name[i])) {
            printf("%c. ", toupper(name[i]));
        } else if (name[i] == ' ' && i + 1 < len && isalpha(name[i + 1])) {
            if (name[i + 2] == '\0' || name[i + 2] == ' ') {
                continue;
            }
            if (name[i + 3] == '\0' || name[i + 3] == ' ') {
                printf("%c. ", toupper(name[i + 1]));
            } else {
                break;
            }
        }
    }

    
    while (i < len && name[i] == ' ') {
        i++;
    }
    for (; i < len; i++) {
        putchar(name[i]);
    }
    printf("\n");

    return 0;
}