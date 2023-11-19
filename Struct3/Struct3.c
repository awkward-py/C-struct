#include <stdio.h>

// Define the structure for a Book
struct Book {
    char title[100];
    char author[50];
    int year;
};

// Function to display information about a book
void displayBook(struct Book book) {
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year: %d\n", book.year);
}

int main() {
    // Declare an array of structures to store information about books in the library
    struct Book library[3];

    // Input information for each book
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", library[i].title);

        printf("Author: ");
        scanf("%s", library[i].author);

        printf("Year: ");
        scanf("%d", &library[i].year);
    }

    // Display information for each book
    printf("\nLibrary Catalog:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        displayBook(library[i]);
    }

    return 0;
}
