#include <stdio.h>

// Define the structure for a Student
struct Student {
    char name[50];
    int rollNumber;
    int age;
    char grade;
};

// Function to display information about a student
void displayStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Age: %d\n", student.age);
    printf("Grade: %c\n", student.grade);
}

int main() {
    // Declare an array of structures to store information about students
    struct Student enrollment[3];

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", enrollment[i].name);

        printf("Roll Number: ");
        scanf("%d", &enrollment[i].rollNumber);

        printf("Age: ");
        scanf("%d", &enrollment[i].age);

        printf("Grade: ");
        scanf(" %c", &enrollment[i].grade); // Notice the space before %c to consume the newline character
    }

    // Display information for each student
    printf("\nStudent Enrollment:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        displayStudent(enrollment[i]);
    }

    return 0;
}
