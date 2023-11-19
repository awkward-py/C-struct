#include <stdio.h>

// Define the structure for a Student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to display information about a student
void displayStudent(struct Student student) {
    // Display the name, roll number, and marks of a student
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);
}

int main() {
    // Declare an array of structures to store information about students
    struct Student studentDatabase[3];

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        // Prompt the user to enter details for each student
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", studentDatabase[i].name);

        printf("Roll Number: ");
        scanf("%d", &studentDatabase[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &studentDatabase[i].marks);
    }

    // Display information for each student
    printf("\nStudent Database:\n");
    for (int i = 0; i < 3; i++) {
        // Display the information of each student using the displayStudent function
        printf("\nStudent %d:\n", i + 1);
        displayStudent(studentDatabase[i]);
    }

    return 0;
}
