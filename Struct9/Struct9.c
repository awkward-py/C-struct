#include <stdio.h>

// Define a structure named Student to represent student information
struct Student {
    char name[50];
    int age;
    float GPA;
};

int main() {
    // Declare an array of type Student to store information for multiple students
    struct Student students[3];

    // Input information for three students
    for (int i = 0; i < 3; ++i) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter GPA for student %d: ", i + 1);
        scanf("%f", &students[i].GPA);
    }

    // Display the information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n\n", students[i].GPA);
    }

    return 0;
}
