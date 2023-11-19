#include <stdio.h>

// Define the structure for a Student
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // Declare an array of structures to store information about multiple students
    struct Student students[3];

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}
