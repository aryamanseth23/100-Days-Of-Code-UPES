//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Person {
    char name[50];
    int age;
    float height;
};
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}
int main() {
    struct Person person;
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter height: ");
    scanf("%f", &person.height);
    printPerson(person);
    return 0;
}   