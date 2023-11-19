#include <stdio.h>

// Define the structure for an Employee
struct Employee {
    char name[50];
    int employeeId;
    float salary;
};

// Function to display information about an employee
void displayEmployee(struct Employee employee) {
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employeeId);
    printf("Salary: %.2f\n", employee.salary);
}

int main() {
    // Declare an array of structures to store information about employees
    struct Employee employees[3];

    // Input information for each employee
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeId);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display information for each employee
    printf("\nEmployee Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }

    return 0;
}
