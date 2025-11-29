//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    int roleInput;
    printf("Select a user role:\n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");
    printf("Enter your choice (0-2): ");
    scanf("%d", &roleInput);

    enum UserRole role = (enum UserRole)roleInput;

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected!\n");
            break;
    }

    return 0;
}