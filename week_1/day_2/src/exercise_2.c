/* Write a program that prompts for length and width inputs
    and returns the size of a room in square yards */

#include <stdio.h>
#define INCHES_IN_A_FOOT 12
#define FEET_IN_A_YARD 3

float inches_to_feet(int inches) {
    return (float)inches / (float)INCHES_IN_A_FOOT;
}

float dimension_as_decimal(int feet, int inches) {
    return (float)feet + inches_to_feet(inches);
}

float square_yardage(float length, float width) {
    return (length * width) / (float)FEET_IN_A_YARD;
}

int main(void) {
    int length_feet = 0;
    int length_inches = 0;
    float length = 0.0;
    int width_feet = 0;
    int width_inches = 0;
    float width = 0.0;
    float sqft;

    printf("Please enter the length of the room as feet, inches: ");
    scanf("%d, %d", &length_feet, &length_inches);
    printf("Please enter the width of the room as feet, inches: ");
    scanf("%d, %d", &width_feet, &width_inches);
    length = dimension_as_decimal(length_feet, length_inches);
    width = dimension_as_decimal(width_feet, width_inches);
    printf("%.2f\n", length);
    printf("%.2f\n", width);

    printf("The square yardage is: %.2f\n", square_yardage(length, width));

    return 0;
}