//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, numDigits = 0, tempNum, placeValue = 1, swappedNum;
    printf("Enter an integer: ");
    scanf("%d", &num);

    tempNum = num;
    lastDigit = tempNum % 10;

    while (tempNum >= 10) {
        tempNum /= 10;
        numDigits++;
        placeValue *= 10;
    }
    firstDigit = tempNum;

    if (numDigits == 0) {
        swappedNum = num; 
    } else {
        swappedNum = (lastDigit * placeValue) + (num % placeValue / 10 * 10) + firstDigit;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}