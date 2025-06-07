#include <stdio.h>

void foodzone(int *totalAmount)
{
    int choice, quantity, amount = 0;

    printf("\n Menu:");
    printf("\n 1. Pizza           price = 180 rs/pcs");
    printf("\n 2. Burger          price = 100 rs/pcs");
    printf("\n 3. Dosa            price = 180 rs/pcs");
    printf("\n 4. Vadapav         price = 50 rs/pcs");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nYou have selected Pizza");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = 180 * quantity;
            break;

        case 2:
            printf("\nYou have selected Burger");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = 100 * quantity;
            break;

        case 3:
            printf("\nYou have selected Dosa");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = 180 * quantity;
            break;

        case 4:
            printf("\nYou have selected Vadapav");
            printf("\nEnter the quantity: ");
            scanf("%d", &quantity);
            amount = 50 * quantity;
            break;

        default:
            printf("Invalid choice...!!!\n");
            return;
    }

    printf("Amount: %d\n", amount);
    *totalAmount += amount;
}

int main()
{
    int totalAmount = 0;
    char continueOrder;

    // First Order
    foodzone(&totalAmount);

    // Ask for one more order
    printf("Do you want to place more orders? (y/n): ");
    scanf(" %c", &continueOrder);

    if (continueOrder == 'y' || continueOrder == 'Y') {
        // Second Order
        foodzone(&totalAmount);
    }

    printf("\nTotal Amount: %d\n", totalAmount);
    printf("Thank you for your order!\n");

    return 0;
}
