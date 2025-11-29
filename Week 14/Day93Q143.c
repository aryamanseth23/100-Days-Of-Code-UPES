//Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    int topIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Age: %d\n", students[topIndex].age);
    printf("Marks: %.2f\n", students[topIndex].marks);
    return 0;
}