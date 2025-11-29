//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void printEmployee(struct Employee *emp) {
    printf("Employee Name: %s\n", emp->name);
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Salary: %.2f\n", emp->salary);
}
int main() {
    struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter Employee Name: ");
    scanf("%s", emp->name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
    printEmployee(emp);
    free(emp);
    return 0;   
}