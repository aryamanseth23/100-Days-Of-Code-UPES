//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].rollNumber, students[i].marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");
    printf("-------------------------------\n");

    struct Student temp;
    while (fscanf(file, "%s %d %f", temp.name, &temp.rollNumber, &temp.marks) == 3) {
        printf("%s\t%d\t\t%.2f\n", temp.name, temp.rollNumber, temp.marks);
    }

    fclose(file);

    return 0;
}