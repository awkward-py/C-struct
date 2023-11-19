#include <stdio.h>

// Define the structure for a Product
struct Product {
    char name[50];
    int productCode;
    float price;
};

// Function to display information about a product
void displayProduct(struct Product product) {
    printf("Product Name: %s\n", product.name);
    printf("Product Code: %d\n", product.productCode);
    printf("Price: $%.2f\n", product.price);
}

int main() {
    // Declare an array of structures to store information about products
    struct Product inventory[3];

    // Input information for each product
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Product %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", inventory[i].name);

        printf("Product Code: ");
        scanf("%d", &inventory[i].productCode);

        printf("Price: $");
        scanf("%f", &inventory[i].price);
    }

    // Display information for each product
    printf("\nProduct Inventory:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nProduct %d:\n", i + 1);
        displayProduct(inventory[i]);
    }

    return 0;
}
