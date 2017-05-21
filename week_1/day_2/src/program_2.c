#include <stdio.h>
#include <limits.h>

int main(void) {
    short int number_of_cars;
    printf("Enter the number of cars: ");
    scanf("%hd", &number_of_cars);
    printf("\nthe number of cars is: %d\n", number_of_cars);
    return 0;
}