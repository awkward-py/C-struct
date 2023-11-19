#include <stdio.h>

// Step 1: Define the structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Step 2: Declare a structure variable
    struct Person awkwardpy;

    // Step 3: Access and modify structure members
    printf("Enter name: ");
    scanf("%s", awkwardpy.name);

    printf("Enter age: ");
    scanf("%d", &awkwardpy.age);

    printf("Enter height: ");
    scanf("%f", &awkwardpy.height);

    // Step 4: Display the information
    printf("\nPerson Information:\n");
    printf("Name: %s\n", awkwardpy.name);
    printf("Age: %d\n", awkwardpy.age);
    printf("Height: %.2f\n", awkwardpy.height);

    return 0;
}
