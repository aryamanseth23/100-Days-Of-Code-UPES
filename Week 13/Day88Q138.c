//Print all enum names and integer values using a loop.
#include <stdio.h>
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};
int main() {
    printf("Enum Color values:\n");
    for (int i = RED; i <= ORANGE; i++) {
        switch (i) {
            case RED:
                printf("RED = %d\n", RED);
                break;
            case GREEN:
                printf("GREEN = %d\n", GREEN);
                break;
            case BLUE:
                printf("BLUE = %d\n", BLUE);
                break;
            case YELLOW:
                printf("YELLOW = %d\n", YELLOW);
                break;
            case ORANGE:
                printf("ORANGE = %d\n", ORANGE);
                break;
            default:
                break;
        }
    }
    return 0;
}