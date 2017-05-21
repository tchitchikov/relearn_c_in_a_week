#include <stdio.h>
#include <math.h>

float determine_height(float height_1, float height_2, float distance_1, float distance_2) {
    float height_3 = 0.0f;
    height_3 = height_1 + ((distance_1 + distance_2) * (height_2 - height_1)) / distance_1;
    return height_3;
}


int main() {
    printf("testing the program");
    float height_1      = 0.0f;
    float height_2      = 0.0f;
    float distance_1    = 0.0f;
    float distance_2    = 0.0f;
    float output        = 0.0f;

    printf("\nPlease enter each value and hit return: {height_1, height_2, distance_1, distance _2}\n");
    scanf("%f", &height_1);
    scanf("%f", &height_2);
    scanf("%f", &distance_1);
    scanf("%f", &distance_2);

    output = determine_height(height_1, height_2, distance_1, distance_2);
    printf("The height of the tree is: %.2f\n", output);

    return 0;
}

