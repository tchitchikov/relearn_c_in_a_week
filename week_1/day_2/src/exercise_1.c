#include <stdio.h>
#include <math.h>
#define INCHES_IN_A_FOOT 12
#define FEET_IN_A_YARD 3

float inches_mantissa(float original) {
    float floor_val;
    float mantissa;
    floor_val = floorf(original);
    mantissa = original - floor_val;
    return mantissa * (float)INCHES_IN_A_FOOT;
}

float distance_feet(int distance) {
    return (float)distance / (float)INCHES_IN_A_FOOT;
}

float distance_yards(int distance) {
    return distance_feet(distance) / FEET_IN_A_YARD;
}

int main(void) {
    int distance;
    float yards;
    float feet;

    printf("enter a distance in inches: ");
    scanf("%d", &distance);

    printf("\nThe distance in inches is: %d\n", distance);
    printf("The distance in feet is: %.0f\' %.0f\"\n", 
        floorf(distance_feet(distance)), 
        inches_mantissa(distance_feet(distance))
    );
    printf("The distance in yards is: %.2f\n", distance_yards(distance));

    return 0;
}


