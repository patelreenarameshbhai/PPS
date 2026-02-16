
#include <stdio.h>

int main() {
    char product[30];
    int rate, qty;
    float amount, discount, netAmount;

    printf("Enter product name: ");
    scanf("%s", product);

    printf("Enter rate: ");
    scanf("%d", &rate);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    amount = rate * qty;

    if (amount >= 101 && amount <= 10000) {
        discount = amount * 0.05;
    } else if (amount >= 10001 && amount <= 15000) {
        discount = amount * 0.07;
    } else if (amount >= 15001 && amount <= 20000) {
        discount = amount * 0.09;
    } else if (amount > 20000) {
        discount = amount * 0.12;
    } else {
        discount = 0;
    }

    netAmount = amount - discount;

    printf("\nProduct: %s", product);
    printf("\nRate: %d", rate);
    printf("\nQuantity: %d", qty);
    printf("\nTotal Amount: %.2f", amount);
    printf("\nDiscount: %.2f", discount);
    printf("\nNet Amount to Pay: %.2f\n", netAmount);

    return 0;
}


