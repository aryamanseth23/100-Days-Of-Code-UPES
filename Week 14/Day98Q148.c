//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int areEmployeesIdentical(struct Employee emp1, struct Employee emp2) {
    return (strcmp(emp1.name, emp2.name) == 0) && (emp1.id == emp2.id) && (emp1.salary == emp2.salary);
}
int main() {
    struct Employee emp1, emp2;
    printf("Enter details for Employee 1:\n");
    printf("Name: ");
    scanf("%s", emp1.name);
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Salary: ");
    scanf("%f", &emp1.salary);  
    printf("Enter details for Employee 2:\n");
    printf("Name: ");
    scanf("%s", emp2.name);
    printf("ID: ");
    scanf("%d", &emp2.id);
    printf("Salary: ");
    scanf("%f", &emp2.salary);  
    if (areEmployeesIdentical(emp1, emp2)) {
        printf("The two employees are identical.\n");
    } else {
        printf("The two employees are not identical.\n");
    }
    return 0;
}