//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius, area, circumference;
    

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Output the results
    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f\n", circumference);

    return 0;
}