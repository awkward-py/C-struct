#include <stdio.h>

// Define a structure named Car to represent car details
struct Car {
    char brand[50];
    char model[50];
    int year;
    float price;
};

int main() {
    // Declare variables of type Car
    struct Car car1, car2;

    // Assign values to the structure members for the first car
    printf("Enter brand for Car 1: ");
    scanf("%s", car1.brand);

    printf("Enter model for Car 1: ");
    scanf("%s", car1.model);

    printf("Enter manufacturing year for Car 1: ");
    scanf("%d", &car1.year);

    printf("Enter price for Car 1: ");
    scanf("%f", &car1.price);

    // Assign values to the structure members for the second car
    printf("\nEnter brand for Car 2: ");
    scanf("%s", car2.brand);

    printf("Enter model for Car 2: ");
    scanf("%s", car2.model);

    printf("Enter manufacturing year for Car 2: ");
    scanf("%d", &car2.year);

    printf("Enter price for Car 2: ");
    scanf("%f", &car2.price);

    // Display the information for both cars
    printf("\nCar 1 Information:\n");
    printf("Brand: %s\n", car1.brand);
    printf("Model: %s\n", car1.model);
    printf("Year: %d\n", car1.year);
    printf("Price: %.2f\n", car1.price);

    printf("\nCar 2 Information:\n");
    printf("Brand: %s\n", car2.brand);
    printf("Model: %s\n", car2.model);
    printf("Year: %d\n", car2.year);
    printf("Price: %.2f\n", car2.price);

    return 0;
}
