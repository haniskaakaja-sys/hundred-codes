#include <stdio.h>

/* Function to calculate full amount */
float calculateAmount(int price, int quantity)
{
    return price * quantity;
}

/* Function to display daily sales */
void displaySales(int white, int dark, int raw, int bittersweet)
{
    printf("\n----- DAILY SALES REPORT -----\n");

    printf("White Chocolate Sold      : %d\n", white);
    printf("Dark Chocolate Sold       : %d\n", dark);
    printf("Raw Chocolate Sold        : %d\n", raw);
    printf("Bittersweet Chocolate Sold: %d\n", bittersweet);
}

int main()
{
    int choice, quantity;
    int white = 0, dark = 0, raw = 0, bittersweet = 0;
    int price, discount;
    float fullAmount, discountAmount, totalAmount;
    char again;

    do
    {
        printf("\n----- CHOCOLATE MENU -----\n");
        printf("1. White Chocolate       Price: Rs.50   Discount: 10%%\n");
        printf("2. Dark Chocolate        Price: Rs.60   Discount: 12%%\n");
        printf("3. Raw Chocolate         Price: Rs.42   Discount: 6%%\n");
        printf("4. Bittersweet Chocolate Price: Rs.55   Discount: 8%%\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("Enter number of chocolates required: ");
        scanf("%d", &quantity);

        switch(choice)
        {
            case 1:
                price = 50;
                discount = 10;
                white = white + quantity;
                break;

            case 2:
                price = 60;
                discount = 12;
                dark = dark + quantity;
                break;

            case 3:
                price = 42;
                discount = 6;
                raw = raw + quantity;
                break;

            case 4:
                price = 55;
                discount = 8;
                bittersweet = bittersweet + quantity;
                break;

            default:
                printf("Invalid Choice!\n");
                continue;
        }

        fullAmount = calculateAmount(price, quantity);

        discountAmount = fullAmount * discount / 100;

        totalAmount = fullAmount - discountAmount;

        printf("\nFull Amount     : Rs. %.2f\n", fullAmount);
        printf("Discount Amount : Rs. %.2f\n", discountAmount);
        printf("Total Amount    : Rs. %.2f\n", totalAmount);

        printf("\nIs there another customer? (Y/N): ");
        scanf(" %c", &again);

    } while(again == 'Y' || again == 'y');

    /* Display total sales */
    displaySales(white, dark, raw, bittersweet);

    return 0;
}
