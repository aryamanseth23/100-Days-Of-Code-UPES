//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
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
    struct Employee emp;
    struct Employee *empPtr = &emp;
    printf("Enter Employee Name: ");
    scanf("%s", empPtr->name);
    printf("Enter Employee ID: ");
    scanf("%d", &empPtr->id);
    printf("Enter Employee Salary: ");
    scanf("%f", &empPtr->salary);
    printEmployee(empPtr);  
    return 0;
}