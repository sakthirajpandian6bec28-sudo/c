#include <stdio.h>

int main()
{
    char customer[50], product[50];
    int quantity;
    float price, total;

    printf("Enter Customer Name: ");
    scanf("%s", customer);

    printf("Enter Product Name: ");
    scanf("%s", product);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\n******** SHOPPING BILL ********\n");
    printf("Customer Name : %s\n", customer);
    printf("Product Name  : %s\n", product);
    printf("Quantity      : %d\n", quantity);
    printf("Price         : %.2f\n", price);
    printf("------------------------------\n");
    printf("Total Amount  : %.2f\n", total);
    printf("******************************\n");

    return 0;
}
