//Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char name[200];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");
    int len = strlen(name);
    for (int i = 0; i < len; i++) {
        
        if (i == 0 && isalpha(name[i])) {
            printf("%c", toupper(name[i]));
        } else if (name[i] == ' ' && i + 1 < len && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");

    return 0;
}