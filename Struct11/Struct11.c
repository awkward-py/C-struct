#include <stdio.h>

// Define a structure named Movie to represent movie details
struct Movie {
    char title[100];
    char genre[50];
    int releaseYear;
    float rating;
};

int main() {
    // Declare variables of type Movie
    struct Movie movie1, movie2;

    // Assign values to the structure members for the first movie
    printf("Enter title for Movie 1: ");
    scanf("%s", movie1.title);

    printf("Enter genre for Movie 1: ");
    scanf("%s", movie1.genre);

    printf("Enter release year for Movie 1: ");
    scanf("%d", &movie1.releaseYear);

    printf("Enter rating for Movie 1: ");
    scanf("%f", &movie1.rating);

    // Assign values to the structure members for the second movie
    printf("\nEnter title for Movie 2: ");
    scanf("%s", movie2.title);

    printf("Enter genre for Movie 2: ");
    scanf("%s", movie2.genre);

    printf("Enter release year for Movie 2: ");
    scanf("%d", &movie2.releaseYear);

    printf("Enter rating for Movie 2: ");
    scanf("%f", &movie2.rating);

    // Display the information for both movies
    printf("\nMovie 1 Information:\n");
    printf("Title: %s\n", movie1.title);
    printf("Genre: %s\n", movie1.genre);
    printf("Release Year: %d\n", movie1.releaseYear);
    printf("Rating: %.2f\n", movie1.rating);

    printf("\nMovie 2 Information:\n");
    printf("Title: %s\n", movie2.title);
    printf("Genre: %s\n", movie2.genre);
    printf("Release Year: %d\n", movie2.releaseYear);
    printf("Rating: %.2f\n", movie2.rating);

    return 0;
}
