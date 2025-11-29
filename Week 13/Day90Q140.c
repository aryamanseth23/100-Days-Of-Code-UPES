//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name[50];
    int age;
    Gender gender;
} Person;

void printGender(Gender g) {
    switch (g) {
        case MALE:   printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER:  printf("Other\n"); break;
    }
}

int main() {
    Person p = {"Alex", 30, MALE};

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: ");
    printGender(p.gender);

    return 0;
}
